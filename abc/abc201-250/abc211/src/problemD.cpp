#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const ll INF = LONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		edges[a - 1].emplace_back(b - 1);
		edges[b - 1].emplace_back(a - 1);
	}
	vector<ll> dp(n, INF);
	dp[0] = 0LL;
	vector<mint> ans(n, 0);
	ans[0] = 1;
	queue<pair<int, ll>> q;
	q.push({0, 0LL});
	while (!q.empty()) {
		pair<int, ll> node = q.front();
		q.pop();
		int now = node.first;
		if (dp[now] == node.second) {
			for (int next : edges[now]) {
				if (dp[next] > dp[now] + 1) {
					dp[next] = dp[now] + 1;
					ans[next] = ans[now];
					q.push({next, dp[next]});
				} else if (dp[next] == dp[now] + 1) {
					ans[next] += ans[now];
				}
			}
		}
	}
	cout << ans[n - 1].val() << endl;
	return 0;
}
