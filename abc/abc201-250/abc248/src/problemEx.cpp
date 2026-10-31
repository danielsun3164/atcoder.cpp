#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using S = vector<P>;
using F = int;

const int INF = INT_MAX >> 1;

int k;

S op(S x, S y) {
	S result;
	int i = 0, j = 0;
	while ((i < int(x.size())) || (j < int(y.size()))) {
		if (int(result.size()) == k + 1) {
			break;
		}
		if (i == int(x.size())) {
			result.emplace_back(y[j++]);
		} else if (j == int(y.size())) {
			result.emplace_back(x[i++]);
		} else {
			if (x[i].first < y[j].first) {
				result.emplace_back(x[i++]);
			} else if (x[i].first == y[j].first) {
				result.push_back({x[i].first, x[i].second + y[j++].second});
				i++;
			} else {
				result.emplace_back(y[j++]);
			}
		}
	}
	return result;
}

S e() {
	return S{{INF, 0}};
}

F id() {
	return 0;
}

S mapping(F f, S s) {
	S result = s;
	for (auto &p : result) {
		p.first += f;
	}
	return result;
}

F composition(F f, F g) {
	return f + g;
}

using segtree = atcoder::lazy_segtree<S, op, e, F, mapping, composition, id>;

int main(void) {
	int n;
	cin >> n >> k;
	vector<int> p(n);
	for (int &pi : p) {
		cin >> pi;
		pi--;
	}

	segtree seg(vector<S>(n, S{{0, 1}}));
	stack<int> mx, mn;
	mx.push(-1), mn.push(-1);
	ll answer = 0;
	for (int i = 0; i < n; i++) {
		while ((-1 != mx.top()) && (p[mx.top()] < p[i])) {
			int tmp = mx.top();
			mx.pop();
			seg.apply(mx.top() + 1, tmp + 1, p[i] - p[tmp]);
		}
		mx.push(i);
		while ((-1 != mn.top()) && (p[mn.top()] > p[i])) {
			int tmp = mn.top();
			mn.pop();
			seg.apply(mn.top() + 1, tmp + 1, p[tmp] - p[i]);
		}
		mn.push(i);

		S vec = seg.prod(0, i + 1);
		for (P &p : vec) {
			if (p.first > k) {
				break;
			}
			answer += p.second;
		}
		seg.apply(0, i + 1, -1);
	}
	cout << answer << endl;
	return 0;
}
