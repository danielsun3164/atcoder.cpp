#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	vector<vector<int>> dp(a, vector<int>(b, -1));
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		dp[x - 1][y - 1] = 0;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (dp[i][j] < 0) {
				dp[i][j] = ((i > 0) ? dp[i - 1][j] : 0) + ((j > 0) ? dp[i][j - 1] : 0);
			}
		}
	}
	cout << dp[a - 1][b - 1] << endl;
	return 0;
}
