#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> t(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		sum += t[i];
	}
	vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= sum - t[i]; j++) {
			if (dp[i][j]) {
				dp[i + 1][j] = dp[i + 1][j + t[i]] = true;
			}
		}
	}
	int ans = INT_MAX;
	for (int i = 0; i <= sum; i++) {
		if (dp[n][i]) {
			ans = min(ans, max(i, sum - i));
		}
	}
	cout << ans << endl;
	return 0;
}
