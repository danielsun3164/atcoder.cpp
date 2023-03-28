#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint binom(int n, int m) {
	return (n >= m) ? fact[n] * inv_fact[m] * inv_fact[n - m] : 0;
}

int main() {
	int n, m;
	cin >> n >> m;
	int n2 = n << 1;
	init(n2);
	vector<vector<bool>> can(n2, vector<bool>(n2, 0));
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		can[a][b] = can[b][a] = true;
	}
	vector<vector<mint>> dp(n2 + 1, vector<mint>(n + 1, 0));
	for (int i = 0; i <= n2; i++) {
		dp[i][0] = 1;
	}
	for (int j = 1; j <= n; j++) {
		for (int i = 0; i <= 2 * (n - j); i++) {
			dp[i][j] = 0;
			for (int k = 0; k < j; k++) {
				if (can[i][i + 2 * k + 1]) {
					dp[i][j] += dp[i + 1][k] * dp[i + 2 * k + 2][j - k - 1] * binom(j, k + 1);
				}
			}
		}
	}
	cout << dp[0][n].val() << endl;
	return 0;
}
