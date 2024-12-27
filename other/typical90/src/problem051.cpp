#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, k;
	ll p;
	cin >> n >> k >> p;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vector<vector<vector<ll>>> dp(2, vector<vector<ll>>(k + 1));
	for (int i = 0; i < 2; i++) {
		dp[i][0].emplace_back(0LL);
	}
	for (int i = 0; i < n; i++) {
		for (int j = min(k - 1, i >> 1); j >= 0; j--) {
			for (ll dpij : dp[1 & i][j]) {
				dp[1 & i][j + 1].emplace_back(dpij + a[i]);
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (vector<ll> &v : dp[i]) {
			sort(v.begin(), v.end());
		}
	}
	ll answer = 0LL;
	for (int j = 0; j <= k; j++) {
		for (ll dp0j : dp[0][j]) {
			if (dp0j > p) {
				break;
			}
			answer += distance(dp[1][k - j].begin(),
							   upper_bound(dp[1][k - j].begin(), dp[1][k - j].end(), p - dp0j));
		}
	}
	cout << answer << endl;
	return 0;
}
