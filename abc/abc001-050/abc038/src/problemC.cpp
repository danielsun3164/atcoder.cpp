#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<ll> dp(n);
	dp[0] = 1LL;
	for (int i = 1; i < n; i++) {
		dp[i] = (a[i] > a[i - 1]) ? dp[i - 1] + 1 : 1LL;
	}
	cout << accumulate(dp.begin(), dp.end(), 0LL) << endl;
	return 0;
}
