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

void init(int x, vector<vector<mint>> &dp) {
	int n = dp.size(), m = dp[0].size();
	for (int ni = 1; ni < n; ni++) {
		for (int mi = 1; mi < m; mi++) {
			dp[ni][mi] = binom(ni * mi, x);
			for (int i = 1; i <= ni; i++) {
				for (int j = 1; j <= mi; j++) {
					if (i == ni && j == mi) {
						continue;
					}
					dp[ni][mi] -= binom(ni, i) * binom(mi, j) * dp[i][j];
				}
			}
		}
	}
}

int main(void) {
	int n, m, b, w;
	cin >> n >> m >> b >> w;
	init_fact(n * m);
	vector<vector<mint>> dp1(n + 1, vector<mint>(m + 1, 0)), dp2(n + 1, vector<mint>(m + 1, 0));
	init(b, dp1);
	init(w, dp2);
	mint answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			for (int k = 1; k <= m; k++) {
				for (int l = 1; l <= m - k; l++) {
					answer += binom(n, i) * binom(n - i, j) * binom(m, k) * binom(m - k, l) *
							  dp1[i][k] * dp2[j][l];
				}
			}
		}
	}
	cout << answer.val() << endl;
	return 0;
}
