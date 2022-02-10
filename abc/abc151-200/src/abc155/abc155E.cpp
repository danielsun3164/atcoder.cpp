#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string n;
	cin >> n;
	int l = n.size();
	vector<vector<int>> dp(l + 1, vector<int>(2, 0));
	dp[0][1] = 1;
	for (int i = 0; i < l; i++) {
		int d = n[i] - '0';
		dp[i + 1][0] = min(dp[i][0] + d, dp[i][1] + 10 - d);
		dp[i + 1][1] = min(dp[i][0] + d + 1, dp[i][1] + 9 - d);
	}
	cout << dp[l][0] << endl;
	return 0;
}
