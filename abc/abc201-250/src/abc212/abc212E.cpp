#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<vector<mint>> dp(2, vector<mint>(n, 0));
	dp[0][0] = 1;
	for (int i = 0; i < k; i++) {
		mint sum = accumulate(dp[i & 1].begin(), dp[i & 1].end(), mint(0));
		for (int j = 0; j < n; j++) {
			dp[(i + 1) & 1][j] = sum - dp[i & 1][j];
			for (int ne : edges[j]) {
				dp[(i + 1) & 1][j] -= dp[i & 1][ne];
			}
		}
	}
	cout << dp[k & 1][0].val() << endl;
	return 0;
}
