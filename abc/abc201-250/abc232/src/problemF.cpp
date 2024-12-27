#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int n;
	ll x, y;
	cin >> n >> x >> y;
	vector<ll> a(n), b(n), dp(1 << n, INF);
	for (ll &ai : a) {
		cin >> ai;
	}
	for (ll &bi : b) {
		cin >> bi;
	}
	dp[0] = 0LL;
	for (int bit = 0; bit < (1 << n); bit++) {
		int i = __builtin_popcount(bit);
		for (int j = 0; j < n; j++) {
			if (!((bit >> j) & 1)) {
				int count = __builtin_popcount((~bit) & ((1 << j) - 1));
				dp[bit ^ (1 << j)] =
					min(dp[bit ^ (1 << j)], dp[bit] + abs(a[j] - b[i]) * x + count * y);
			}
		}
	}
	cout << dp[(1 << n) - 1] << endl;
	return 0;
}
