#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int N = 2010;

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
	return ((n >= m) && (n >= 0) && (m >= 0)) ? fact[n] * inv_fact[m] * inv_fact[n - m] : 0;
}

int main(void) {
	int k, n;
	cin >> k >> n;
	init(N);
	vector<int> x(k);
	for (int i = 0; i < k; i++) {
		cin >> x[i];
		x[i]++;
	}
	vector<vector<mint>> dp(N, vector<mint>(1 << k, 0));
	dp[0][0] = 1;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < (1 << k); j++) {
			for (int l = 0; l < k; l++) {
				if (j & (1 << l)) {
					continue;
				}
				int mem = ((1 << k) - 1 - ((1 << l) - 1)) & j;
				dp[i][j + (1 << l)] +=
					((__builtin_popcount(mem) & 1) ? -1 : 1) * dp[i - 1][j] * binom(n, i - x[l]);
			}
			dp[i][j] += dp[i - 1][j];
		}
	}
	mint answer = dp[N - 1][(1 << k) - 1];
	answer /= mint(2).pow(k * n);
	cout << answer.val() << endl;
	return 0;
}
