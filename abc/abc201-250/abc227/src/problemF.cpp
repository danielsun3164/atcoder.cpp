#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int h, w, k;
	cin >> h >> w >> k;
	vector<vector<ll>> a(h, vector<ll>(w));
	for (vector<ll> &ai : a) {
		for (ll &aij : ai) {
			cin >> aij;
		}
	}
	ll answer = INF;
	for (auto y : a) {
		for (auto x : y) {
			vector<vector<vector<ll>>> dp(k + 1, vector<vector<ll>>(h, vector<ll>(w, INF)));
			if (a[0][0] >= x) {
				dp[1][0][0] = a[0][0];
			}
			if (a[0][0] <= x) {
				dp[0][0][0] = 0LL;
			}
			for (int i = 0; i <= k; i++) {
				for (int j = 0; j < h; j++) {
					for (int l = 0; l < w; l++) {
						if (j != h - 1) {
							if ((i != k) && (a[j + 1][l] >= x)) {
								dp[i + 1][j + 1][l] =
									min(dp[i + 1][j + 1][l], dp[i][j][l] + a[j + 1][l]);
							}
							if (a[j + 1][l] <= x) {
								dp[i][j + 1][l] = min(dp[i][j + 1][l], dp[i][j][l]);
							}
						}
						if (l != w - 1) {
							if ((i != k) && (a[j][l + 1] >= x)) {
								dp[i + 1][j][l + 1] =
									min(dp[i + 1][j][l + 1], dp[i][j][l] + a[j][l + 1]);
							}
							if (a[j][l + 1] <= x) {
								dp[i][j][l + 1] = min(dp[i][j][l + 1], dp[i][j][l]);
							}
						}
					}
				}
			}
			answer = min(answer, dp[k][h - 1][w - 1]);
		}
	}
	cout << answer << endl;
	return 0;
}
