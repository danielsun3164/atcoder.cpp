#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 5;
const static int M = 1'000;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<ll>> dp(N + 1, vector<ll>(M + 1, 0LL));
	dp[0][0] = 1LL;
	for (int i = 0; i < n; i++) {
		for (int j = N; j > 0; j--) {
			for (int k = M; k >= a[i]; k--) {
				dp[j][k] += dp[j - 1][k - a[i]];
			}
		}
	}
	cout << dp[N][M] << endl;
	return 0;
}
