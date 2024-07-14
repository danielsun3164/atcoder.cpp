#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, d;
	cin >> n >> d;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<map<ll, int>> dp(n + 1);
	dp[0][0LL] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i; j >= 0; j--) {
			for (pair<ll, int> dpj : dp[j]) {
				dp[j + 1][dpj.first | a[i]] += dpj.second;
			}
		}
	}
	ll answer = 0LL;
	for (int i = 0; i <= n; i++) {
		for (pair<ll, int> dpi : dp[i]) {
			answer +=
				((1 & i) ? -1 : 1) * (1LL << (d - __builtin_popcountll(dpi.first))) * dpi.second;
		}
	}
	cout << answer << endl;
	return 0;
}
