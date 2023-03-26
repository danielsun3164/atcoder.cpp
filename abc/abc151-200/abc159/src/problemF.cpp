#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<vector<mint>>> dp(n + 1, vector<vector<mint>>(s + 1, vector<mint>(3)));
	dp[0][0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= s; j++) {
			dp[i + 1][j][0] += dp[i][j][0];
			dp[i + 1][j][1] += dp[i][j][0] + dp[i][j][1];
			dp[i + 1][j][2] += dp[i][j][0] + dp[i][j][1] + dp[i][j][2];
			if (j + a[i] <= s) {
				dp[i + 1][j + a[i]][1] += dp[i][j][0] + dp[i][j][1];
				dp[i + 1][j + a[i]][2] += dp[i][j][0] + dp[i][j][1];
			}
		}
	}
	cout << dp[n][s][2].val() << endl;
	return 0;
}
