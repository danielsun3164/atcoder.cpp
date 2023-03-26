#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

int main() {
	int n;
	cin >> n;
	int m = n << 1;
	vector<int> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	vector<vector<int>> dp(m, vector<int>(m, INF));
	for (int i = 0; i < m - 1; i++) {
		dp[i][i + 1] = abs(a[i] - a[i + 1]);
	}
	for (int j = 3; j < m; j += 2) {
		for (int i = 0; i < m - j; i++) {
			for (int k = 1; k < j; k += 2) {
				dp[i][i + j] = min(dp[i][i + j], dp[i][i + k] + dp[i + k + 1][i + j]);
			}
			dp[i][i + j] = min(dp[i][i + j], dp[i + 1][i + j - 1] + abs(a[i] - a[i + j]));
		}
	}
	cout << dp[0][m - 1] << endl;
	return 0;
}
