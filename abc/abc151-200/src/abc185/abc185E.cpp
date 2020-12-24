#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	vector<vector<int>> dp(n + 1, vector<int>(m + 1));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i][0] = i;
	}
	dp[n][0] = n;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		dp[0][i] = i;
	}
	dp[0][m] = m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dp[i + 1][j + 1] = min(min(dp[i][j + 1] + 1, dp[i + 1][j] + 1), dp[i][j] + ((a[i] == b[j]) ? 0 : 1));
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}
