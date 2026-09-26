#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const int N = 10;

int main(void) {
	int n;
	cin >> n;
	vector<vector<mint>> dp(n, vector<mint>(N, 0));
	for (int j = 1; j < N; j++) {
		dp[0][j] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < N; j++) {
			for (int k = max(1, j - 1); k <= min(9, j + 1); k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}
	mint answer = 0;
	for (int j = 1; j < N; j++) {
		answer += dp[n - 1][j];
	}
	cout << answer.val() << endl;
	return 0;
}
