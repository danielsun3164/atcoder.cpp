#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

int main(void) {
	int h, w;
	ll c;
	cin >> h >> w >> c;
	vector<vector<ll>> a(h, vector<ll>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
		}
	}
	vector<vector<ll>> dp(h + 1, vector<ll>(w + 1, INF)), dp2(h + 1, vector<ll>(w + 1, INF));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			dp[i + 1][j + 1] = min( { a[i][j], dp[i][j + 1] + c, dp[i + 1][j] + c });
			dp2[i + 1][j + 1] = min( { a[i][w - 1 - j], dp2[i][j + 1] + c, dp2[i + 1][j] + c });
		}
	}
	ll ans = INF;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			ans = min(
					{ ans, dp[i + 1][j] + c + a[i][j], dp[i][j + 1] + c + a[i][j], dp2[i + 1][j] + c + a[i][w - 1 - j],
							dp2[i][j + 1] + c + a[i][w - 1 - j] });
		}
	}
	cout << ans << endl;
	return 0;
}
