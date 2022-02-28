#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m = 2 + (1 & n), p = n / 2;
	vector<vector<ll>> dp(p + 1, vector<ll>(m, 0LL));
	for (int i = 1; i <= p; i++) {
		for (int j = 0; j < m; j++) {
			dp[i][j] = dp[i - 1][j] + a[i * 2 - 2 + j];
			for (int k = 0; k < j; k++) {
				dp[i][j] = max(dp[i][j], dp[i - 1][k] + a[i * 2 - 2 + j]);
			}
		}
	}
	cout << *max_element(dp[p].begin(), dp[p].end()) << endl;
	return 0;
}
