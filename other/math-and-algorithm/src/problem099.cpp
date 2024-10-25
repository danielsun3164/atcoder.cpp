#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(int now, int prev, vector<vector<int>> &edges, vector<ll> &dp) {
	dp[now] = 1LL;
	for (int next : edges[now]) {
		if (next != prev) {
			dfs(next, now, edges, dp);
			dp[now] += dp[next];
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n - 1), b(n - 1);
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i] >> b[i];
		a[i]--, b[i]--;
		edges[a[i]].emplace_back(b[i]);
		edges[b[i]].emplace_back(a[i]);
	}
	vector<ll> dp(n, 0LL);
	dfs(0, -1, edges, dp);
	ll answer = 0LL;
	for (int i = 0; i < n - 1; i++) {
		ll r = min(dp[a[i]], dp[b[i]]);
		answer += r * (n - r);
	}
	cout << answer << endl;
	return 0;
}
