#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

int n;
vector<int> a;
vector<vector<int>> edges;

void dfs(vector<int> &dp, vector<int> &ans, int now, int prev) {
	int idx = distance(dp.begin(), lower_bound(dp.begin(), dp.end(), a[now]));
	int old_dp = dp[idx];
	dp[idx] = a[now];
	ans[now] = max(ans[prev], idx + 1);
	for (int next : edges[now]) {
		if (next != prev) {
			dfs(dp, ans, next, now);
		}
	}
	dp[idx] = old_dp;
}

int main() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	edges.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<int> dp(n, INF), ans(n, 0);
	dfs(dp, ans, 0, 0);
	for (int ai : ans) {
		cout << ai << endl;
	}
	return 0;
}
