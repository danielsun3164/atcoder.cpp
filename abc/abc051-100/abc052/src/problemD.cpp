#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll a, b;
	cin >> n >> a >> b;
	vector<ll> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	vector<ll> dp(n);
	dp[0] = 0LL;
	for (int i = 1; i < n; i++) {
		dp[i] = min((x[i] - x[i - 1]) * a, b) + dp[i - 1];
	}
	cout << dp[n - 1] << endl;
	return 0;
}
