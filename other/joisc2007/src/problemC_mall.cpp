#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = INT_MAX >> 1;

int main() {
	int m, n, a, b;
	cin >> m >> n >> a >> b;
	vector<vector<int>> c(n, vector<int>(m));
	vector<vector<ll>> sum(n + 1, vector<ll>(m + 1, 0));
	for (int i = 0; i < n; i++) {
		ll row = 0LL;
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
			if (c[i][j] < 0) {
				c[i][j] = INF;
			}
			row += c[i][j];
			sum[i + 1][j + 1] = sum[i][j + 1] + row;
		}
	}
	ll ans = LONG_MAX;
	for (int i = 0; i < n - b; i++) {
		for (int j = 0; j < m - a; j++) {
			ans = min(ans, sum[i + b][j + a] - sum[i + b][j] - sum[i][j + a] + sum[i][j]);
		}
	}
	cout << ans << endl;
	return 0;
}
