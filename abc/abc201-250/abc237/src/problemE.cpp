#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<ll> h(n);
	for (ll &hi : h) {
		cin >> hi;
	}
	vector<vector<pair<int, ll>>> g(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		g[u].emplace_back(v, max(0LL, h[v] - h[u]));
		g[v].emplace_back(u, max(0LL, h[u] - h[v]));
	}
	vector<ll> dist(n, INF);
	dist[0] = 0LL;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push({0LL, 0});
	while (!que.empty()) {
		auto [cost, now] = que.top();
		que.pop();
		if (dist[now] == cost) {
			for (auto next : g[now]) {
				if (dist[next.first] > dist[now] + next.second) {
					dist[next.first] = dist[now] + next.second;
					que.push({dist[next.first], next.first});
				}
			}
		}
	}
	ll answer = -INF;
	for (int i = 0; i < n; i++) {
		answer = max(answer, h[0] - h[i] - dist[i]);
	}
	cout << answer << endl;
	return 0;
}
