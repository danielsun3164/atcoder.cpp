#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<mint>> dp(n + 1, vector<mint>(k + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if (dp[i][j] != 0) {
				for (int l = 1; l <= min(m, k - j); l++) {
					dp[i + 1][j + l] += dp[i][j];
				}
			}
		}
	}
	cout << accumulate(dp[n].begin(), dp[n].end(), mint(0)).val() << endl;
	return 0;
}
