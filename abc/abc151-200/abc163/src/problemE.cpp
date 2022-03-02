#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

int main(void) {
	int n;
	cin >> n;
	vector<pair<ll, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end(), greater<pair<ll, int>>());
	vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -INF));
	dp[0][0] = 0LL;
	for (int i = 0; i < n; i++) {
		int idx = a[i].second;
		for (int j = 0; j <= i; j++) {
			if (dp[i][j] >= 0) {
				dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + a[i].first * abs(idx - j));
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + a[i].first * abs(n - 1 - (i - j) - idx));
			}
		}
	}
	cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
	return 0;
}
