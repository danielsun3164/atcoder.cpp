#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

int main() {
	int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b = a, c(n + 1);
	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());
	c[0] = 0;
	for (int i = 0; i < n; i++) {
		c[i + 1] = distance(b.begin(), lower_bound(b.begin(), b.end(), a[i])) + 1;
	}
	atcoder::fenwick_tree<int> ft(b.size() + 2);
	ft.add(c[n], 1);
	int l = n;
	ll count = 0LL;
	vector<int> cl(n + 1);
	for (int r = n; r >= 1; r--) {
		while ((l > 0) && (count <= k)) {
			l--;
			count += ft.sum(0, c[l]);
			ft.add(c[l], 1);
		}
		ft.add(c[r], -1);
		count -= ft.sum(c[r] + 1, b.size() + 1);
		cl[r] = l;
	}
	vector<mint> dp(n + 1), ru(n + 1);
	dp[0] = ru[0] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i] = (cl[i] > 0) ? ru[i - 1] - ru[cl[i] - 1] : ru[i - 1];
		ru[i] = ru[i - 1] + dp[i];
	}
	cout << dp[n].val() << endl;
	return 0;
}
