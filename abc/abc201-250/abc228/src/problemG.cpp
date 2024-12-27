#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

const static int N = 10;
const static int M = 1 << N;

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	vector<vector<int>> c(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < w; j++) {
			c[i][j] = s[j] - '0';
		}
	}
	n <<= 1;
	vector<vector<vector<vector<int>>>> trans(
		2, vector<vector<vector<int>>>(N, vector<vector<int>>(M, vector<int>(N, 0))));
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				int imask = 0, kmask = 0;
				for (int x = 0; x < h; x++) {
					for (int y = 0; y < w; y++) {
						if ((i == c[x][y]) && (j & (1 << y))) {
							imask |= 1 << x;
						}
						if (k == c[x][y]) {
							kmask |= 1 << x;
						}
					}
				}
				trans[0][i][j][k] = imask & kmask;
				imask = kmask = 0;
				for (int x = 0; x < h; x++) {
					for (int y = 0; y < w; y++) {
						if ((i == c[x][y]) && (j & (1 << x))) {
							imask |= 1 << y;
						}
						if (k == c[x][y]) {
							kmask |= 1 << y;
						}
					}
				}
				trans[1][i][j][k] = imask & kmask;
			}
		}
	}
	vector<vector<vector<mint>>> dp(n + 1, vector<vector<mint>>(N, vector<mint>(M, 0)));
	for (int i = 1; i < N; i++) {
		int imask = 0;
		for (int x = 0; x < h; x++) {
			for (int y = 0; y < w; y++) {
				if (i == c[x][y]) {
					imask |= 1 << x;
				}
			}
		}
		dp[1][i][imask] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (0 == dp[i][j][k]) {
					continue;
				}
				for (int l = 1; l < N; l++) {
					int nk = trans[i & 1][j][k][l];
					dp[i + 1][l][nk] += dp[i][j][k];
				}
			}
		}
	}
	mint answer = 0;
	for (int j = 1; j < N; j++) {
		for (int k = 1; k < M; k++) {
			answer += dp[n][j][k];
		}
	}
	cout << answer.val() << endl;
	return 0;
}
