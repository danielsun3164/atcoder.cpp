#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for (int &hi : h) {
		cin >> hi;
	}
	vector<ll> dp(n);
	dp[0] = 0LL;
	dp[1] = abs(h[1] - h[0]);
	for (int i = 2; i < n; i++) {
		dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
	}
	cout << dp[n - 1] << endl;
	return 0;
}
