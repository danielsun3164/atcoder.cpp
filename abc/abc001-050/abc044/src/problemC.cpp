#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, a;
	cin >> n >> a;
	vector<int> x(n), sum(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		sum[i] += ((i > 0) ? sum[i - 1] : 0) + x[i];
	}
	vector<vector<ll>> dp(n + 1, vector<ll>(max(n * a, sum[n - 1]) + 1, 0LL));
	dp[0][0] = 1LL;
	for (int i = 0; i < n; i++) {
		for (int j = i; j >= 0; j--) {
			for (int k = sum[i]; k >= x[i]; k--) {
				dp[j + 1][k] += dp[j][k - x[i]];
			}
		}
	}
	ll answer = 0LL;
	for (int i = 1; i <= n; i++) {
		answer += dp[i][i * a];
	}
	cout << answer << endl;
	return 0;
}
