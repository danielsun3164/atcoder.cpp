#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static char A = 'a';

void dfs(int n, vector<char> &c, vector<vector<int>> &g, vector<vector<mint>> &dp, int now, int prev) {
	mint val1 = 1, val2 = 1;
	for (int next : g[now]) {
		if (next != prev) {
			dfs(n, c, g, dp, next, now);
			if (A == c[now]) {
				val1 *= (dp[next][0] + dp[next][2]);
			} else {
				val1 *= (dp[next][1] + dp[next][2]);
			}
			val2 *= (dp[next][0] + dp[next][1] + 2 * dp[next][2]);
		}
	}
	if (A == c[now]) {
		dp[now][0] = val1;
	} else {
		dp[now][1] = val1;
	}
	dp[now][2] = val2 - val1;
}

int main() {
	int n;
	cin >> n;
	vector<char> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	vector<vector<int>> g(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}
	vector<vector<mint>> dp(n, vector<mint>(3, 0));
	dfs(n, c, g, dp, 0, -1);
	cout << dp[0][2].val() << endl;
	return 0;
}
