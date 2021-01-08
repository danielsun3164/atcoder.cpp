#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

const int INF = INT_MAX >> 1;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> g(n, 0), dp(1 << n, INF);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a] |= 1 << b;
		g[b] |= 1 << a;
	}
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 1 << n; j++) {
			if ((1 == dp[j]) && (j == (g[i] & j))) {
				dp[1 << i | j] = 1;
			}
		}
	}
	for (int i = 0; i < 1 << n; i++) {
		for (int j = (i - 1) & i; j > 0; j = (j - 1) & i) {
			dp[i] = min(dp[i], dp[i ^ j] + dp[j]);
		}
	}
	cout << dp.back() << endl;
	return 0;
}
