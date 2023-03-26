#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const int N = 62;

int main() {
	ll n;
	int b, k;
	cin >> n >> b >> k;
	vector<int> c(k);
	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}
	vector<int> pow10(N);
	pow10[0] = 10 % b;
	for (int i = 1; i < N; i++) {
		pow10[i] = pow10[i - 1] * pow10[i - 1] % b;
	}
	vector<vector<mint>> dp(N + 1, vector<mint>(b, 0)), ans(N + 1, vector<mint>(b, 0));
	ans[0][0] = 1;
	for (int i = 0; i < k; i++) {
		dp[0][c[i] % b]++;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < b; j++) {
			for (int l = 0; l < b; l++) {
				int next = (j * pow10[i] + l) % b;
				dp[i + 1][next] += dp[i][j] * dp[i][l];
				if (n & (1LL << i)) {
					ans[i + 1][next] += ans[i][j] * dp[i][l];
				}
			}
			if (!(n & (1LL << i))) {
				ans[i + 1][j] = ans[i][j];
			}
		}
	}
	cout << ans[N][0].val() << endl;
	return 0;
}
