#include <bits/stdc++.h>
using namespace std;

const char BLUE = '+';
const int INF = INT_MAX >> 1;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> a(h);
	for (int i = 0; i < h; i++) {
		cin >> a[i];
	}
	vector<vector<int>> dp(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			dp[i][j] = (1 & (i + j)) ? INF : -INF;
		}
	}
	dp[h - 1][w - 1] = 0;
	for (int i = h - 1; i >= 0; i--) {
		for (int j = w - 1; j >= 0; j--) {
			if (1 & (i + j)) {
				if (i > 0) {
					dp[i - 1][j] = max(dp[i - 1][j], dp[i][j] + ((BLUE == a[i][j]) ? 1 : -1));
				}
				if (j > 0) {
					dp[i][j - 1] = max(dp[i][j - 1], dp[i][j] + ((BLUE == a[i][j]) ? 1 : -1));
				}
			} else {
				if (i > 0) {
					dp[i - 1][j] = min(dp[i - 1][j], dp[i][j] - ((BLUE == a[i][j]) ? 1 : -1));
				}
				if (j > 0) {
					dp[i][j - 1] = min(dp[i][j - 1], dp[i][j] - ((BLUE == a[i][j]) ? 1 : -1));
				}
			}
		}
	}
	cout << ((0 == dp[0][0]) ? "Draw" : ((dp[0][0] > 0) ? "Takahashi" : "Aoki")) << endl;
	return 0;
}
