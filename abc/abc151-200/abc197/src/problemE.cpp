#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static const int INF = INT_MAX >> 1;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n + 1, INF), b(n + 1, -INF);
	a[0] = b[0] = 0;
	for (int i = 0; i < n; i++) {
		int x, c;
		cin >> x >> c;
		a[c] = min(a[c], x);
		b[c] = max(b[c], x);
	}
	vector<vector<ll>> dp(n + 1, vector<ll>(2, 0LL));
	for (int i = 1; i <= n; i++) {
		if (INF == a[i]) {
			dp[i][0] = dp[i - 1][0];
			dp[i][1] = dp[i - 1][1];
			a[i] = a[i - 1];
			b[i] = b[i - 1];
		} else {
			dp[i][0] = min(dp[i - 1][0] + abs(a[i - 1] - b[i]) + (b[i] - a[i]),
						   dp[i - 1][1] + abs(b[i - 1] - b[i]) + (b[i] - a[i]));
			dp[i][1] = min(dp[i - 1][0] + abs(a[i - 1] - a[i]) + (b[i] - a[i]),
						   dp[i - 1][1] + abs(b[i - 1] - a[i]) + (b[i] - a[i]));
		}
	}
	cout << min(dp[n][0] + abs(a[n]), dp[n][1] + abs(b[n])) << endl;
	return 0;
}
