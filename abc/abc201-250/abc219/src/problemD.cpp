#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int main(void) {
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<vector<vector<int>>> dp(2, vector<vector<int>>(x + 1, vector<int>(y + 1, INF)));
	dp[0][0][0] = 0;
	for (int i = 0; i < n; i++) {
		dp[(i + 1) & 1] = dp[i & 1];
		for (int j = 0; j <= x; j++) {
			for (int k = 0; k <= y; k++) {
				dp[(i + 1) & 1][min(x, j + a[i])][min(y, k + b[i])] = min(
						dp[(i + 1) & 1][min(x, j + a[i])][min(y, k + b[i])], dp[i & 1][j][k] + 1);
			}
		}
	}
	cout << ((INF == dp[n & 1][x][y]) ? -1 : dp[n & 1][x][y]) << endl;
	return 0;
}
