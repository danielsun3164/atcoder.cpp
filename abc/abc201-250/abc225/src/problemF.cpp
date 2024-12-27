#include <bits/stdc++.h>
using namespace std;

string min(string a, string b) {
	return (a > b) ? b : a;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<string> s(n);
	for (string &si : s) {
		cin >> si;
	}
	sort(s.begin(), s.end(), [](string x, string y) { return (x + y) < (y + x); });
	vector<vector<string>> dp(n + 1, vector<string>(k + 1, "{"));
	dp[n][0] = "";
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j <= k; j++) {
			dp[i][j] = min(dp[i][j], dp[i + 1][j]);
			if (j > 0) {
				dp[i][j] = min(dp[i][j], s[i] + dp[i + 1][j - 1]);
			}
		}
	}
	cout << dp[0][k] << endl;
	return 0;
}
