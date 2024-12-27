#include <bits/stdc++.h>
using namespace std;

const static int N = 400;
const static int INF = INT_MAX >> 1;

int main(void) {
	int n, ma, mb;
	cin >> n >> ma >> mb;
	vector<int> a(n), b(n), c(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}
	vector<vector<vector<int>>> dp(2, vector<vector<int>>(N + 1, vector<int>(N + 1, INF)));
	dp[0][0][0] = 0;
	for (int i = 0; i < n; i++) {
		dp[(i + 1) & 1] = dp[i & 1];
		for (int j = 0; j <= N - a[i]; j++) {
			for (int k = 0; k <= N - b[i]; k++) {
				if (INF != dp[i & 1][j][k]) {
					dp[(i + 1) & 1][j + a[i]][k + b[i]] =
						min(dp[(i + 1) & 1][j + a[i]][k + b[i]], dp[i & 1][j][k] + c[i]);
				}
			}
		}
	}
	int answer = INF;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i * mb == j * ma) {
				answer = min(answer, dp[n & 1][i][j]);
			}
		}
	}
	cout << ((INF == answer) ? -1 : answer) << endl;
	return 0;
}
