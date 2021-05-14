#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 3;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<vector<ll>> dp(N + 1, vector<ll>(N * n + 2, 0LL));
	dp[0][0] = 1LL;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= (i * n); j++) {
			dp[i + 1][j + 1] += dp[i][j];
			dp[i + 1][j + 1 + n] -= dp[i][j];
		}
		for (int j = 1; j < (i + 1) * n + 2; j++) {
			dp[i + 1][j] += dp[i + 1][j - 1];
		}
	}
	int sum;
	for (sum = N; sum <= N * n; sum++) {
		if (k <= dp[N][sum]) {
			break;
		}
		k -= dp[N][sum];
	}
	vector<int> ans(N);
	for (int i = 0; i < N - 1; i++) {
		for (int j = 1; j <= n; j++) {
			if (k <= dp[N - i - 1][sum - j]) {
				ans[i] = j;
				sum -= j;
				break;
			}
			k -= dp[N - i - 1][sum - j];
		}
	}
	ans[N - 1] = sum;
	for (int i = 0; i < N; i++) {
		if (i) {
			cout << " ";
		}
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
