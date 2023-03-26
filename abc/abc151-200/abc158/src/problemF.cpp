#include <bits/stdc++.h>
#include <atcoder/segtree>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int op(int a, int b) {
	return max(a, b);
}

int e() {
	return 0;
}

int main() {
	int n;
	cin >> n;
	vector<pair<ll, ll>> xd(n);
	for (int i = 0; i < n; i++) {
		cin >> xd[i].first >> xd[i].second;
	}
	sort(xd.begin(), xd.end());
	vector<ll> x(n);
	for (int i = 0; i < n; i++) {
		x[i] = xd[i].first;
	}
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = i;
	}
	atcoder::segtree<int, op, e> seg(v);
	vector<mint> dp(n + 1);
	dp[n] = 1;
	for (int i = n - 1; i >= 0; i--) {
		int j = lower_bound(x.begin(), x.end(), xd[i].first + xd[i].second) - x.begin();
		int r = seg.prod(i, j);
		dp[i] = dp[i + 1] + dp[r + 1];
		seg.set(i, r);
	}
	cout << dp[0].val() << endl;
	return 0;
}
