#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i + 1][i + 1] = 1;
		for (int j = 0; j < i; j++) {
			dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j + 1]);
			if (a[i] > a[j]) {
				dp[i + 1][i + 1] = max(dp[i + 1][i + 1], dp[i][j + 1] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(ans, dp[n][i + 1]);
	}
	cout << ans << endl;
	return 0;
}
