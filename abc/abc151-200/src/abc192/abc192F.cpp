#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(int n, ll x, vector<int> a, int c) {
	vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(c + 1, vector<ll>(c, -1L)));
	dp[0][0][0] = 0L;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < min(c, i + 1); j++) {
			for (int k = 0; k < c; k++) {
				if (dp[i][j][k] >= 0L) {
					dp[i + 1][j][k] = max(dp[i + 1][j][k], dp[i][j][k]);
					int r = (k + a[i] % c) % c;
					dp[i + 1][j + 1][r] = max(dp[i + 1][j + 1][r], dp[i][j][k] + a[i]);
				}
			}
		}
	}
	return (dp[n][c][(int) (x % c)] >= 0L) ? (x - dp[n][c][(int) (x % c)]) / c : -1L;
}

int main() {
	int n;
	ll x, ans = LONG_MAX >> 1;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 1; i <= n; i++) {
		ll s = solve(n, x, a, i);
		if (s >= 0L) {
			ans = min(ans, s);
		}
	}
	cout << ans << endl;
	return 0;
}
