#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n), sum(n + 1);
	sum[0] = 0LL;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum[i + 1] = sum[i] + a[i];
	}
	vector<vector<mint>> dp(n + 1, vector<mint>(n + 1, 0));
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i][1] = 1;
	}
	for (int j = 2; j <= n; j++) {
		vector<mint> temp_sum(j, 0);
		temp_sum[sum[j - 1] % j] += dp[j - 1][j - 1];
		for (int i = j; i <= n; i++) {
			dp[i][j] = temp_sum[sum[i] % j];
			temp_sum[sum[i] % j] += dp[i][j - 1];
		}
	}
	mint ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += dp[n][i];
	}
	cout << ans.val() << endl;
	return 0;
}
