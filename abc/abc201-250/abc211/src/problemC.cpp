#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const string CHOKUDAI = "chokudai";
const int N = CHOKUDAI.size();

int main(void) {
	string s;
	cin >> s;
	vector<vector<mint>> dp(2, vector<mint>(N + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i < int(s.size()); i++) {
		for (int j = 0; j <= N; j++) {
			dp[(i + 1) & 1][j] = dp[i & 1][j];
		}
		long unsigned int idx = CHOKUDAI.find(s[i]);
		if (string::npos != idx) {
			dp[(i + 1) & 1][idx + 1] += dp[i & 1][idx];
		}
	}
	cout << dp[s.size() & 1][N].val() << endl;
	return 0;
}
