#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n + 1), b(n + 1);
	a[0] = b[0] = 0LL;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(2, vector<ll>(2, INF)));
	dp[1][0][0] = a[1];
	dp[1][1][1] = 0LL;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				for (int prej = 0; prej < 2; prej++) {
					dp[i][j][k] = min(dp[i][j][k], dp[i - 1][prej][k] + ((0 == j) ? a[i] : 0LL) +
													   ((j == prej) ? b[i - 1] : 0LL));
				}
			}
		}
	}
	ll answer = INF;
	for (int j = 0; j < 2; j++) {
		for (int k = 0; k < 2; k++) {
			answer = min(answer, dp[n][j][k] + ((j == k) ? b[n] : 0LL));
		}
	}
	cout << answer << endl;
	return 0;
}
