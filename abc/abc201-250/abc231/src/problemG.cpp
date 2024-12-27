#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<vector<mint>> dp(n + 1, vector<mint>(n + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 0; j <= i; j++) {
			dp[i + 1][j + 1] += dp[i][j] * a;
			dp[i + 1][j] += dp[i][j];
		}
	}
	mint answer = 0;
	for (int i = 0; i <= n; i++) {
		if (k - n + i >= 0) {
			mint now = 1;
			for (int j = k; j > k - n + i; j--) {
				now *= j;
			}
			answer += now * dp[n][i] / mint(n).pow(n - i);
		}
	}
	cout << answer.val() << endl;
	return 0;
}
