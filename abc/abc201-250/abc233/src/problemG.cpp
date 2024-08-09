#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;
const static char BLOCK = '#';

vector<vector<vector<vector<int>>>> dp;
vector<vector<int>> sum;
int solve(int lx, int ly, int rx, int ry) {
	if ((lx > rx) || (ly > ry)) {
		return 0;
	}
	if (dp[lx][ly][rx][ry] < INF) {
		return dp[lx][ly][rx][ry];
	}
	dp[lx][ly][rx][ry] = max(rx - lx + 1, ry - ly + 1);
	for (int i = lx; i <= rx; i++) {
		if (0 == sum[i + 1][ry + 1] - sum[i][ry + 1] - sum[i + 1][ly] + sum[i][ly]) {
			dp[lx][ly][rx][ry] =
				min(dp[lx][ly][rx][ry], solve(lx, ly, i - 1, ry) + solve(i + 1, ly, rx, ry));
		}
	}
	for (int i = ly; i <= ry; i++) {
		if (0 == sum[rx + 1][i + 1] - sum[rx + 1][i] - sum[lx][i + 1] + sum[lx][i]) {
			dp[lx][ly][rx][ry] =
				min(dp[lx][ly][rx][ry], solve(lx, ly, rx, i - 1) + solve(lx, i + 1, rx, ry));
		}
	}
	return dp[lx][ly][rx][ry];
}

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n);
	for (string &si : s) {
		cin >> si;
	}
	dp.resize(n, vector<vector<vector<int>>>(n, vector<vector<int>>(n, vector<int>(n, INF))));
	sum.resize(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dp[i][j][i][j] = (BLOCK == s[i][j]) ? 1 : 0;
			sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] - sum[i][j] + dp[i][j][i][j];
		}
	}
	cout << solve(0, 0, n - 1, n - 1) << endl;
	return 0;
}
