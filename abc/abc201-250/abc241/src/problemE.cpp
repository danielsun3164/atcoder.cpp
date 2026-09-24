#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 42;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	vector<vector<ll>> dp(N, vector<ll>(n));
	for (int j = 0; j < n; j++) {
		dp[0][j] = a[j];
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < n; j++) {
			dp[i + 1][j] = dp[i][j] + dp[i][(j + dp[i][j]) % n];
		}
	}
	ll answer = 0LL;
	for (int i = 0; i < N; i++) {
		if (k & 1) {
			answer += dp[i][answer % n];
		}
		k >>= 1;
	}
	cout << answer << endl;
	return 0;
}
