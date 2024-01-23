#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<mint>> dp(n + 1, vector<mint>(n + 1, 0));
	dp[0][0] = 1;
	vector<mint> sum(n + 1);
	sum[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			dp[i][j] = sum[j - i] + dp[i][j - i];
		}
		for (int j = 0; j <= n; j++) {
			sum[j] += dp[i][j];
			if (m <= i) {
				sum[j] -= dp[i - m][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << dp[i][n].val() << endl;
	}
	return 0;
}
