#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<vector<ll>> dp(n + 1, vector<ll>(2));
	dp[0][0] = dp[0][1] = 1L;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if ("AND" == s) {
			dp[i + 1][0] = dp[i][0] * 2L + dp[i][1];
			dp[i + 1][1] = dp[i][1];
		} else {
			dp[i + 1][0] = dp[i][0];
			dp[i + 1][1] = dp[i][0] + dp[i][1] * 2L;
		}
	}
	cout << dp[n][1] << endl;
	return 0;
}
