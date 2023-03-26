#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	vector<mint> dp(n, 0);
	dp[0] = 1;
	for (int i = 0; i < n - 1; i++) {
		vector<mint> ndp(n, 0);
		if (h[i] < h[i + 1]) {
			mint sum = 0;
			for (int j = 0; j < i + 2; j++) {
				ndp[j] = sum;
				sum += dp[j];
			}
		} else if (h[i] > h[i + 1]) {
			mint sum = 0;
			for (int j = i + 1; j >= 0; j--) {
				sum += dp[j];
				ndp[j] = sum;
			}
		} else {
			mint sum = 0;
			for (int j = 0; j < i + 1; j++) {
				sum += dp[j];
			}
			for (int j = 0; j < i + 2; j++) {
				ndp[j] = sum;
			}
		}
		dp = ndp;
	}
	mint ans = 0;
	for (int i = 0; i < n; i++) {
		ans += dp[i];
	}
	cout << ans.val() << endl;
	return 0;
}
