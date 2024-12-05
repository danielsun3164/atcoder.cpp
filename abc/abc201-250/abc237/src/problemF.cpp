#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<vector<vector<mint>>>> dp(
		n + 1,
		vector<vector<vector<mint>>>(m + 2, vector<vector<mint>>(m + 2, vector<mint>(m + 2, 0))));
	dp[0][m + 1][m + 1][m + 1] = 1;
	for (int i = 0; i < n; i++) {
		for (int a1 = 1; a1 <= m + 1; a1++) {
			for (int a2 = a1; a2 <= m + 1; a2++) {
				for (int a3 = a2; a3 <= m + 1; a3++) {
					for (int x = 1; x <= m; x++) {
						if (x <= a1) {
							dp[i + 1][x][a2][a3] += dp[i][a1][a2][a3];
						} else if (x <= a2) {
							dp[i + 1][a1][x][a3] += dp[i][a1][a2][a3];
						} else if (x <= a3) {
							dp[i + 1][a1][a2][x] += dp[i][a1][a2][a3];
						}
					}
				}
			}
		}
	}
	mint answer = 0;
	for (int a1 = 1; a1 <= m; a1++) {
		for (int a2 = a1; a2 <= m; a2++) {
			for (int a3 = a2; a3 <= m; a3++) {
				answer += dp[n][a1][a2][a3];
			}
		}
	}
	cout << answer.val() << endl;
	return 0;
}
