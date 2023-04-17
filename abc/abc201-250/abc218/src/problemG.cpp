#include <bits/stdc++.h>
#include <atcoder/internal_type_traits>
using namespace std;

const static int INF = INT_MAX >> 1;

// Binary Trieの実装
template<class T> struct BIT {
	using U = atcoder::internal::to_unsigned_t<T>;

public:
	BIT() :
			_n(0) {
	}
	explicit BIT(int n) :
			_n(n), data(n, 0) {
	}

	void add(int p, T x) {
		assert(0 <= p && p < _n);
		p++;
		while (p <= _n) {
			data[p - 1] += U(x);
			p += p & -p;
		}
	}

	T sum(int l, int r) {
		assert(0 <= l && l <= r && r <= _n);
		return sum(r) - sum(l);
	}

	// https://qiita.com/drken/items/1b7e6e459c24a83bb7fd を参考に作成
	/* k-th number (k is 0-indexed) */
	int get(T k) {
		k++;
		int n = 1;
		while (n < _n) {
			n <<= 1;
		}
		int res = 0;
		for (int i = n >> 1; i > 0; i >>= 1) {
			if ((res + i < _n) && (data[res + i - 1] < U(k))) {
				k -= data[res + i - 1];
				res += i;
			}
		}
		return res;
	}

private:
	int _n;
	vector<U> data;

	U sum(int r) {
		U s = 0;
		while (r > 0) {
			s += data[r - 1];
			r -= r & -r;
		}
		return s;
	}
};

int calc(vector<int> &a, vector<vector<int>> &edges, vector<int> &sa, map<int, int> &mp, vector<bool> &used,
		BIT<int> &bt, int now, int count) {
	bool has_next = false;
	for (int next : edges[now]) {
		if (!used[next]) {
			has_next = true;
			break;
		}
	}
	if (has_next) {
		bool use_max = 1 & count;
		int result = use_max ? -INF : INF;
		for (int next : edges[now]) {
			if (!used[next]) {
				used[next] = true;
				bt.add(mp[a[next]], 1);
				int next_result = calc(a, edges, sa, mp, used, bt, next, count + 1);
				result = (use_max) ? max(result, next_result) : min(result, next_result);
				bt.add(mp[a[next]], -1);
				used[next] = false;
			}
		}
		return result;
	}
	return (1 & count) ? sa[bt.get(count >> 1)] : (sa[bt.get(count >> 1)] + sa[bt.get((count - 1) >> 1)]) >> 1;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	// aの値を圧縮する
	vector<int> sa = a;
	sort(sa.begin(), sa.end());
	sa.erase(unique(sa.begin(), sa.end()), sa.end());
	// sa[i]からiへ変換するマップ
	map<int, int> mp;
	for (int i = 0; i < int(sa.size()); i++) {
		mp[sa[i]] = i;
	}
	vector<bool> used(n, false);
	used[0] = true;
	BIT<int> bt(n);
	bt.add(mp[a[0]], 1);
	cout << calc(a, edges, sa, mp, used, bt, 0, 1) << endl;
	return 0;
}
