#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int N = 2;

int main(void) {
	int h, w, k, x1, y1, x2, y2;
	cin >> h >> w >> k >> x1 >> y1 >> x2 >> y2;
	vector<vector<mint>> dp(N, vector<mint>(N, 0));
	dp[x1 != x2][y1 != y2] = 1;
	vector<mint> row = {1, h - 1}, col = {1, w - 1};
	while (k--) {
		vector<vector<mint>> next(N, vector<mint>(N, 0));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				for (int a = 0; a < N; a++) {
					next[i][a] += dp[i][j] * (col[a] - (j == a));
					next[a][j] += dp[i][j] * (row[a] - ((i == a)));
				}
			}
		}
		dp = move(next);
	}
	cout << dp[0][0].val() << endl;
	return 0;
}
