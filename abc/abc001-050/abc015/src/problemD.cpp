#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int w, n, k;
	cin >> w >> n >> k;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(w + 1, 0)));
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			for (int l = 0; l <= w; l++) {
				dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);
				if (l >= a[i]) {
					dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j - 1][l - a[i]] + b[i]);
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i <= k; i++) {
		ans = max(ans, *max_element(dp[n][i].begin(), dp[n][i].end()));
	}
	cout << ans << endl;
	return 0;
}
