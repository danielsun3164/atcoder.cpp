#include <bits/stdc++.h>
using namespace std;

const static char WALL = '#';

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> c(h);
	for (string &ci : c) {
		cin >> ci;
	}
	vector<vector<int>> dp(h, vector<int>(w, 0));
	int answer = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((0 == i) && (0 == j)) {
				dp[i][j] = 1;
			} else if (WALL != c[i][j]) {
				if ((i > 0) && (dp[i - 1][j] > 0)) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j] + 1);
				} else if ((j > 0) && (dp[i][j - 1] > 0)) {
					dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
				}
			}
			answer = max(answer, dp[i][j]);
		}
	}
	cout << answer << endl;
	return 0;
}
