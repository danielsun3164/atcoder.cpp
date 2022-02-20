#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> dp(n, vector<int>(n, INF));
	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		dp[a][b] = dp[b][a] = 1;
	}
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << count(dp[i].begin(), dp[i].end(), 2) << endl;
	}
	return 0;
}
