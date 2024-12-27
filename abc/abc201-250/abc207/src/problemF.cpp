#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

void dfs(vector<vector<int>> &edges, vector<vector<vector<vector<mint>>>> &dp, int now) {
	dp[now].resize(2, vector<vector<mint>>(2, vector<mint>(2, 0)));
	dp[now][0][0][0] = dp[now][1][1][1] = 1;
	for (int next : edges[now]) {
		if (dp[next].empty()) {
			dfs(edges, dp, next);
			int a = dp[now].size(), b = dp[next].size();
			vector<vector<vector<mint>>> nex(a + b - 1,
											 vector<vector<mint>>(2, vector<mint>(2, 0)));
			for (int i = 0; i < a; i++) {
				for (int k = 0; k < 2; k++) {
					for (int l = 0; l < 2; l++) {
						for (int j = 0; j < b; j++) {
							for (int m = 0; m < 2; m++) {
								for (int n = 0; n < 2; n++) {
									if ((0 != dp[now][i][k][l]) && (0 != dp[next][j][m][n])) {
										int sum = i + j + ((1 - l) & m) + (k & (1 - n));
										nex[sum][k][l | m] += dp[now][i][k][l] * dp[next][j][m][n];
									}
								}
							}
						}
					}
				}
			}
			dp[now] = nex;
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<vector<vector<vector<mint>>>> dp(n);
	dfs(edges, dp, 0);
	for (int i = 0; i <= n; i++) {
		mint ans = dp[0][i][0][0] + dp[0][i][0][1] + dp[0][i][1][1];
		cout << ans.val() << endl;
	}
	return 0;
}
