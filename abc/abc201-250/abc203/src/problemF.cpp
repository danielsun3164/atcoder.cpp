#include <bits/stdc++.h>
using namespace std;

const int N = 31;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vector<int> f(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		while (a[cnt] <= a[i] / 2) {
			cnt++;
		}
		f[i] = cnt;
	}
	vector<vector<int>> dp(n + 1, vector<int>(N + 1, 0));
	for (int i = 0; i < n; i++) {
		dp[i + 1][0] = i + 1;
		for (int j = 0; j < N; j++) {
			dp[i + 1][j + 1] = min(dp[i][j + 1] + 1, dp[f[i]][j]);
		}
	}
	for (int j = 0; j <= N; j++) {
		if (dp[n][j] <= k) {
			cout << j << " " << dp[n][j] << endl;
			break;
		}
	}
	return 0;
}
