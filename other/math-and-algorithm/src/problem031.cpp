#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	vector<ll> dp(n);
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
	}
	cout << dp[n - 1] << endl;
	return 0;
}
