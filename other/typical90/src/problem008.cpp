#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const string ATCODER = "atcoder";
const int N = ATCODER.size();

int main() {
	int n;
	string s;
	cin >> n >> s;
	vector<vector<mint>> dp(n + 1, vector<mint>(N + 1, 0));
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < N; j++) {
			dp[i + 1][j + 1] += dp[i][j + 1];
			if (s[i] == ATCODER[j]) {
				dp[i + 1][j + 1] += dp[i][j];
			}
		}
	}
	cout << dp[n][N].val() << endl;
	return 0;
}
