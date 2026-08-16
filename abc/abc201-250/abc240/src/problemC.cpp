#include <bits/stdc++.h>
using namespace std;

const int MAX = 10'100;

int main(void) {
	int n, x;
	cin >> n >> x;
	vector<vector<bool>> dp(2, vector<bool>(MAX, false));
	dp[0][0] = true;
	for (int i = 0; i < n; i++) {
		fill(dp[1 & (i + 1)].begin(), dp[1 & (i + 1)].end(), false);
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < x; j++) {
			if (dp[1 & i][j]) {
				dp[1 & (i + 1)][j + a] = true;
				dp[1 & (i + 1)][j + b] = true;
			}
		}
	}
	cout << (dp[1 & n][x] ? "Yes" : "No") << endl;
	return 0;
}
