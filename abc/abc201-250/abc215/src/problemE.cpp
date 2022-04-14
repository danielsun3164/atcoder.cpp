#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const int N = 10;

int main(void) {
	int n, p = 1 << N;
	string s;
	cin >> n >> s;
	vector<int> is(n, 0);
	for (int i = 0; i < n; i++) {
		is[i] = s[i] - 'A';
	}
	vector<vector<vector<mint>>> dp(2, vector<vector<mint>>(p, vector<mint>(N + 1, 0)));
	dp[0][0][N] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			fill(dp[1 & (i + 1)][j].begin(), dp[1 & (i + 1)][j].end(), 0);
		}
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < ((0 == j) ? N + 1 : N); k++) {
				if (dp[1 & i][j][k] != 0) {
					dp[1 & (i + 1)][j][k] += dp[1 & i][j][k];
					if ((N == k) || (is[i] == k) || (0 == (j & (1 << is[i])))) {
						dp[1 & (i + 1)][j | (1 << is[i])][is[i]] += dp[1 & i][j][k];
					}
				}
			}
		}
	}
	mint ans = 0;
	for (int j = 1; j < p; j++) {
		for (int k = 0; k < N; k++) {
			ans += dp[1 & n][j][k];
		}
	}
	cout << ans.val() << endl;
	return 0;
}
