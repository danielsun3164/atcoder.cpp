#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint;

int main(void) {
	int n, p;
	cin >> n >> p;
	mint::set_mod(p);
	vector<vector<vector<mint>>> dp(2, vector<vector<mint>>(n + 2, vector<mint>(2, 0)));
	dp[0][0][0] = dp[0][1][1] = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i + 2; j++) {
			for (int a = 0; a < 2; a++) {
				for (int b = 0; b < 2; b++) {
					for (int c = 0; c < 2; c++) {
						if ((a + b + c) <= 1) {
							dp[1][j + a + b + c][0] += dp[0][j][0];
						} else if ((a + b) <= 1) {
							dp[1][j + a + b + c][1] += dp[0][j][0];
						}
						if (0 == (a + b + c)) {
							dp[1][j + a + b + c][0] += dp[0][j][1];
						} else if (0 == (a + b)) {
							dp[1][j + a + b + c][1] += dp[0][j][1];
						}
					}
				}
			}
		}
		swap(dp[0], dp[1]);
		for (vector<mint> &row : dp[1]) {
			fill(row.begin(), row.end(), 0);
		}
	}
	for (int i = 0; i < n - 1; i++) {
		cout << (i ? " " : "") << dp[0][i + 1][0].val();
	}
	cout << endl;
	return 0;
}
