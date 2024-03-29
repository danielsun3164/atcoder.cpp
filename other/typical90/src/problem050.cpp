#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main() {
	int n, l;
	cin >> n >> l;
	vector<mint> dp(n + 1, 0);
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i] += dp[i - 1] + ((i >= l) ? dp[i - l] : 0);
	}
	cout << dp[n].val() << endl;
	return 0;
}
