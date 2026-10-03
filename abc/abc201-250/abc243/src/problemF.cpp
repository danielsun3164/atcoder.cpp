#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact;

void init_fact(int n) {
	fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
}

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	init_fact(k);
	vector<int> w(n);
	mint w_sum = 0;
	for (int &wi : w) {
		cin >> wi;
		w_sum += wi;
	}
	vector<mint> p(n);
	for (int i = 0; i < n; i++) {
		p[i] = w[i] / w_sum;
	}

	vector<vector<vector<mint>>> dp(n + 1, vector<vector<mint>>(m + 2, vector<mint>(k + 1, 0)));
	dp[0][0][0] = 1;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y <= m; y++) {
			for (int z = 0; z <= k; z++) {
				for (int c = 0; c <= k - z; c++) {
					dp[x + 1][y + (c != 0)][z + c] += dp[x][y][z] / fact[c] * p[x].pow(c);
				}
			}
		}
	}
	cout << (dp[n][m][k] * fact[k]).val() << endl;
	return 0;
}
