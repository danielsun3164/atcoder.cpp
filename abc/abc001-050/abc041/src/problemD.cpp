#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> g(n, (1 << n) - 1);
	vector<ll> dp(1 << n, INF);
	dp[0] = 1LL;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		g[x] &= ~(1 << y);
		dp[(1 << x) | (1 << y)] = 1LL;
	}
	for (int i = 0; i < n; i++) {
		dp[1 << i] = 1LL;
	}
	for (int bit = 1; bit < (1 << n); bit++) {
		if (INF == dp[bit]) {
			dp[bit] = 0LL;
			for (int i = 0; i < n; i++) {
				if (bit & (1 << i)) {
					int xs = bit & ~(1 << i);
					if (xs == (g[i] & xs)) {
						dp[bit] += dp[xs];
					}
				}
			}
		}
	}
	cout << dp[(1 << n) - 1] << endl;
	return 0;
}
