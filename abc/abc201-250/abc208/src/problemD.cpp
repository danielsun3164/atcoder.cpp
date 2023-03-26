#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = INT_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> dp(n, vector<int>(n, INF));
	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		dp[a - 1][b - 1] = c;
	}
	ll ans = 0LL;
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
				ans += (INF == dp[i][j]) ? 0 : dp[i][j];
			}
		}
	}
	cout << ans << endl;
	return 0;
}
