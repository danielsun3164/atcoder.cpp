#include <bits/stdc++.h>
using namespace std;

const static string NA = "N/A";

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<vector<string>> dp(2, vector<string>(s + 1, NA));
	dp[0][0] = "";
	for (int i = 0; i < n; i++) {
		fill(dp[1 & (i + 1)].begin(), dp[1 & (i + 1)].end(), NA);
		for (int j = 0; j < s; j++) {
			if (NA != dp[1 & i][j]) {
				if (j + a[i] <= s) {
					dp[1 & (i + 1)][j + a[i]] = dp[1 & i][j] + 'A';
				}
				if (j + b[i] <= s) {
					dp[1 & (i + 1)][j + b[i]] = dp[1 & i][j] + 'B';
				}
			}
		}
	}
	cout << ((NA == dp[1 & n][s]) ? "Impossible" : dp[1 & n][s]) << endl;
	return 0;
}
