#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int TEN = 10;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<mint>> dp(n, vector<mint>(TEN, 0));
	dp[0][a[0]] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < TEN; j++) {
			if (dp[i - 1][j] != 0) {
				dp[i][(j + a[i]) % TEN] += dp[i - 1][j];
				dp[i][(j * a[i]) % TEN] += dp[i - 1][j];
			}
		}
	}
	for (int i = 0; i < TEN; i++) {
		cout << dp[n - 1][i].val() << endl;
	}
	return 0;
}
