#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll INF = LONG_LONG_MAX >> 1;

int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	vector<vector<ll>> d(n, vector<ll>(n, 0LL));
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			d[i][j] = d[j][i] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
		}
	}
	vector<ll> cost(1 << n, 0LL);
	for (int i = 1; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < j; l++) {
				if (((i >> j) & 1) && ((i >> l) & 1)) {
					cost[i] = max(cost[i], d[j][l]);
				}
			}
		}
	}
	vector<vector<ll>> dp(k + 1, vector<ll>(1 << n, INF));
	dp[0][0] = 0LL;
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j < (1 << n); j++) {
			for (int l = j; l != 0; l = (l - 1) & j) {
				dp[i][j] = min(dp[i][j], max(dp[i - 1][j - l], cost[l]));
			}
		}
	}
	cout << dp[k][(1 << n) - 1] << endl;
	return 0;
}
