#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, inv_fact;

void init_fact(int n) {
	fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact.resize(n + 1);
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint binom(int n, int k) {
	return (n < 0 || k < 0 || n < k) ? 0 : fact[n] * inv_fact[k] * inv_fact[n - k];
}

int main(void) {
	int n, m;
	cin >> n >> m;
	init_fact(max(n, m));
	vector<pair<int, int>> data(m);
	for (auto &p : data) {
		cin >> p.first >> p.second;
	}
	sort(data.begin(), data.end());
	vector<vector<vector<mint>>> dp(m + 1, vector<vector<mint>>(n + 1, vector<mint>(m + 1, 0)));
	dp[0][0][0] = 1;
	for (int i = 0; i < m; i++) {
		for (int j = n; j >= 0; j--) {
			for (int k = 0; k <= m; k++) {
				if (j < data[i].first - 1) {
					dp[i + 1][j][k] = dp[i][j][k];
				} else if (j <= data[i].second) {
					dp[i + 1][j][k] = dp[i][j][k];
					if (k > 0) {
						dp[i + 1][data[i].second][k] += dp[i][j][k - 1];
					}
				} else {
					if (k > 0) {
						dp[i + 1][j][k] = dp[i][j][k] + dp[i][j][k - 1];
					} else {
						dp[i + 1][j][k] = dp[i][j][k];
					}
				}
			}
		}
	}
	mint answer = 0;
	for (int i = 0; i < m; i++) {
		answer += (binom(m, i) - dp[m][n][i]) / binom(m, i) * m / (m - i);
	}
	cout << answer.val() << endl;
	return 0;
}
