#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m, k, s, t, x;
	cin >> n >> m >> k >> s >> t >> x;
	s--, t--, x--;
	vector<pair<int, int>> edges(m);
	for (auto &[u, v] : edges) {
		cin >> u >> v;
		u--, v--;
	}
	vector<vector<vector<mint>>> dp(k + 1, vector<vector<mint>>(n, vector<mint>(2, 0)));
	dp[0][s][0] = 1;
	for (int i = 0; i < k; i++) {
		for (auto [u, v] : edges) {
			for (int w : {0, 1}) {
				dp[i + 1][v][w ^ (v == x)] += dp[i][u][w];
				dp[i + 1][u][w ^ (u == x)] += dp[i][v][w];
			}
		}
	}
	cout << dp[k][t][0].val() << endl;
	return 0;
}
