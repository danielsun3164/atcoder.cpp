#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, W;
	cin >> n >> W;
	vector<int> w(n), v(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i] >> v[i];
	}
	vector<ll> dp(W + 1, -1);
	dp[0] = 0LL;
	for (int i = 0; i < n; i++) {
		for (int j = W; j >= w[i]; j--) {
			if (dp[j - w[i]] >= 0) {
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
			}
		}
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;
	return 0;
}
