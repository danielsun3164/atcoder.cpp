#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

/**
 * しゃっくり法の実装
 */
int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> f(n);
	for (int i = 0; i < n; i++) {
		cin >> f[i];
		f[i]--;
	}
	vector<int> count(m, 0);
	int left = 0;
	mint sum = 1;
	vector<mint> dp(n + 1, 0);
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		count[f[i]]++;
		while (count[f[i]] > 1) {
			count[f[left]]--;
			sum -= dp[left++];
		}
		dp[i + 1] = sum;
		sum += dp[i + 1];
	}
	cout << dp[n].val() << endl;
	return 0;
}
