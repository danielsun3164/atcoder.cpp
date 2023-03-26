#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static int N = 9;

int main() {
	int k;
	cin >> k;
	if (0 != k % N) {
		cout << 0 << endl;
		return 0;
	}
	vector<mint> dp(k + 1, 0);
	dp[0] = 1;
	for (int i = 0; i < k; i++) {
		for (int j = 1; (j <= N) && (i + j <= k); j++) {
			dp[i + j] += dp[i];
		}
	}
	cout << dp[k].val() << endl;
	return 0;
}
