#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main(void) {
	int n, d = 0;
	cin >> n;
	ll answer = 0LL;
	vector<pair<ll, ll>> vec;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		if (0LL == x) {
			d++;
			answer += y;
		} else {
			vec.emplace_back(pair(x, y));
		}
	}
	vec.emplace_back(pair(0LL, 0LL));
	n = n + 1 - d;
	sort(vec.begin(), vec.end());
	int i0 = 0;
	for (int i = 0; i < n; i++) {
		if (0LL == vec[i].second) {
			i0 = i;
		}
	}
	vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(2, vector<ll>(n + 1, -INF))), dp2(n + 1,
			vector<vector<ll>>(2, vector<ll>(n + 1, -INF)));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			dp[i][j][0] = 0LL;
		}
	}
	for (int j = n - 2; j >= 0; j--) {
		for (int i = 0; i < n - j; i++) {
			for (int k = 1; k < n - j; k++) {
				if (i > 0) {
					dp2[i][0][k] = max(dp2[i][0][k], dp[i - 1][0][k] - k * (vec[i].first - vec[i - 1].first));
					dp2[i][0][k] = max(dp2[i][0][k],
							dp[i - 1][0][k - 1] + vec[i - 1].second - k * (vec[i].first - vec[i - 1].first));

					dp2[i][1][k] = max(dp2[i][1][k], dp[i - 1][0][k] - k * (vec[i + j].first - vec[i - 1].first));
					dp2[i][1][k] = max(dp2[i][1][k],
							dp[i - 1][0][k - 1] + vec[i - 1].second - k * (vec[i + j].first - vec[i - 1].first));
				}
				if ((i + j) < (n - 1)) {
					dp2[i][0][k] = max(dp2[i][0][k], dp[i][1][k] - k * (vec[i + j + 1].first - vec[i].first));
					dp2[i][0][k] = max(dp2[i][0][k],
							dp[i][1][k - 1] + vec[i + j + 1].second - k * (vec[i + j + 1].first - vec[i].first));

					dp2[i][1][k] = max(dp2[i][1][k], dp[i][1][k] - k * (vec[i + j + 1].first - vec[i + j].first));
					dp2[i][1][k] = max(dp2[i][1][k],
							dp[i][1][k - 1] + vec[i + j + 1].second - k * (vec[i + j + 1].first - vec[i + j].first));
				}
			}
		}
		for (int i = 0; i < n - j; i++) {
			for (int k = 1; k < n - j; k++) {
				for (int ii = 0; ii < 2; ii++) {
					dp[i][ii][k] = dp2[i][ii][k];
					dp2[i][ii][k] = -INF;
				}
			}
		}
	}
	ll x = 0;
	for (int k = 0; k < n; k++) {
		x = max(max(x, dp[i0][0][k]), dp[i0][1][k]);
	}
	cout << (answer + x) << endl;
	return 0;
}
