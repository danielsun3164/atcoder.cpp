#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(vector<vector<int>> &edges, int now, int prev, vector<int> &dp) {
	dp[now] = 1;
	for (int next : edges[now]) {
		if (next != prev) {
			dfs(edges, next, now, dp);
			dp[now] += dp[next];
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> dp(n, 0);
	dfs(edges, 0, 0, dp);
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		answer += dp[i] * ll(n - dp[i]);
	}
	cout << answer << endl;
	return 0;
}
