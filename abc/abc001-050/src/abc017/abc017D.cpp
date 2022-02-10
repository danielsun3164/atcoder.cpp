#include <bits/stdc++.h>
#include <atcoder/segtree>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int n;

mint op(mint a, mint b) {
	return a + b;
}

mint e() {
	return 0;
}

int op2(int a, int b) {
	return min(a, b);
}

int e2() {
	return n;
}

int main(void) {
	int m;
	cin >> n >> m;
	vector<int> f(n);
	map<int, vector<int>> mp;
	for (int i = 0; i < n; i++) {
		cin >> f[i];
		mp[f[i]].emplace_back(i);
	}
	// r[i]=iを選ぶとき一覧右に選べるj
	atcoder::segtree<int, op2, e2> r(n);
	atcoder::segtree<mint, op, e> ans(n + 1);
	ans.set(n, 1);
	for (int i = n - 1; i >= 0; i--) {
		auto itr = lower_bound(mp[f[i]].begin(), mp[f[i]].end(), i + 1);
		int end = (itr == mp[f[i]].end()) ? n : *itr;
		r.set(i, min(end, r.prod(i + 1, end)));
		ans.set(i, ans.prod(i + 1, r.get(i) + 1));
	}
	cout << ans.get(0).val() << endl;
	return 0;
}
