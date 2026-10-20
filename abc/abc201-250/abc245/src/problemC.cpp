#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> a(n), b(n);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int &bi : b) {
		cin >> bi;
	}
	vector<vector<bool>> dp(n, vector<bool>(2, false));
	dp[0][0] = dp[0][1] = true;
	for (int i = 1; i < n; i++) {
		if (dp[i - 1][0]) {
			dp[i][0] = dp[i][0] || (abs(a[i] - a[i - 1]) <= k);
			dp[i][1] = dp[i][1] || (abs(b[i] - a[i - 1]) <= k);
		}
		if (dp[i - 1][1]) {
			dp[i][0] = dp[i][0] || (abs(a[i] - b[i - 1]) <= k);
			dp[i][1] = dp[i][1] || (abs(b[i] - b[i - 1]) <= k);
		}
	}
	cout << ((dp[n - 1][0] || dp[n - 1][1]) ? "Yes" : "No") << endl;
	return 0;
}
