#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 3;
const static int M = 46;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(N, vector<int>(n));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			a[i][j] %= M;
		}
	}
	vector<vector<ll>> dp(N + 1, vector<ll>(M, 0LL));
	dp[0][0] = 1LL;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < M; k++) {
				dp[i + 1][(a[i][j] + k) % M] += dp[i][k];
			}
		}
	}
	cout << dp[N][0] << endl;
	return 0;
}
