#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * https://ei1333.github.io/luzhiled/snippets/dp/hu-tucker.html を参考に作成
 */
template <typename Heap, typename T>
T hu_tucker(vector<T> vs, T INF) {
	int n = vs.size();
	Heap heap;
	vector<typename Heap::Node *> hs(n - 1, heap.makeheap());
	vector<int> ls(n), rs(n);
	vector<T> cs(n - 1);
	using pi = pair<T, int>;
	priority_queue<pi, vector<pi>, greater<pi> > que;
	for (int i = 0; i + 1 < n; i++) {
		ls[i] = i - 1;
		rs[i] = i + 1;
		cs[i] = vs[i] + vs[i + 1];
		que.emplace(cs[i], i);
	}
	T ret = 0;
	for (int k = 0; k + 1 < n; k++) {
		T c;
		int i;
		do {
			tie(c, i) = que.top();
			que.pop();
		} while (rs[i] < 0 || cs[i] != c);

		bool ml = false, mr = false;
		if (!heap.empty(hs[i]) && vs[i] + heap.top(hs[i]) == c) {
			heap.pop(hs[i]);
			ml = true;
		} else if (vs[i] + vs[rs[i]] == c) {
			ml = mr = true;
		} else {
			auto top = heap.pop(hs[i]);
			if (!heap.empty(hs[i]) && heap.top(hs[i]) + top == c) {
				heap.pop(hs[i]);
			} else {
				mr = true;
			}
		}
		ret += c;
		heap.push(hs[i], c);
		if (ml) {
			vs[i] = INF;
		}
		if (mr) {
			vs[rs[i]] = INF;
		}

		if (ml && i > 0) {
			int j = ls[i];
			hs[j] = heap.merge(hs[j], hs[i]);
			rs[j] = rs[i];
			rs[i] = -1;
			ls[rs[j]] = j;
			i = j;
		}

		if (mr && rs[i] + 1 < n) {
			int j = rs[i];
			hs[i] = heap.merge(hs[i], hs[j]);
			rs[i] = rs[j];
			rs[j] = -1;
			ls[rs[i]] = i;
		}
		cs[i] = vs[i] + vs[rs[i]];

		if (!heap.empty(hs[i])) {
			T top = heap.pop(hs[i]);
			cs[i] = min(cs[i], min(vs[i], vs[rs[i]]) + top);
			if (!heap.empty(hs[i])) {
				cs[i] = min(cs[i], top + heap.top(hs[i]));
			}
			heap.push(hs[i], top);
		}
		que.emplace(cs[i], i);
	}
	return ret;
}

template <typename T, typename E = T>
struct SkewHeap {
	using G = function<T(T, E)>;
	using H = function<E(E, E)>;

	struct Node {
		T key;
		E lazy;
		Node *l, *r;
	};

	const G g;
	const H h;
	const bool rev;

	SkewHeap(bool rev = false)
		: g([](const T &a, const E &b) { return a + b; }),
		  h([](const E &a, const E &b) { return a + b; }),
		  rev(rev) {}

	SkewHeap(const G &g, const H &h, bool rev = false) : g(g), h(h), rev(rev) {}

	Node *propagate(Node *t) {
		if (t->lazy != 0) {
			if (t->l) {
				t->l->lazy = h(t->l->lazy, t->lazy);
			}
			if (t->r) {
				t->r->lazy = h(t->r->lazy, t->lazy);
			}
			t->key = g(t->key, t->lazy);
			t->lazy = 0;
		}
		return t;
	}

	Node *merge(Node *x, Node *y) {
		if (!x || !y) {
			return x ? x : y;
		}
		propagate(x), propagate(y);
		if ((x->key > y->key) ^ rev) {
			swap(x, y);
		}
		x->r = merge(y, x->r);
		swap(x->l, x->r);
		return x;
	}

	void push(Node *&root, const T &key) {
		root = merge(root, new Node({key, 0, nullptr, nullptr}));
	}

	T top(Node *root) {
		return propagate(root)->key;
	}

	T pop(Node *&root) {
		T top = propagate(root)->key;
		auto *temp = root;
		root = merge(root->l, root->r);
		delete temp;
		return top;
	}

	bool empty(Node *root) const {
		return !root;
	}

	void add(Node *root, const E &lazy) {
		if (root) {
			root->lazy = h(root->lazy, lazy);
			propagate(root);
		}
	}

	Node *makeheap() {
		return nullptr;
	}
};

int main() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll INF = LONG_MAX >> 1;
	cout << hu_tucker<SkewHeap<ll>, ll>(a, INF) << endl;
	return 0;
}
