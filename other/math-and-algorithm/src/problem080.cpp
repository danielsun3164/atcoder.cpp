#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<ll, int>>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		ll c;
		cin >> a >> b >> c;
		a--, b--;
		edges[a].push_back({c, b});
		edges[b].push_back({c, a});
	}
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push({0LL, 0});
	vector<ll> dist(n, INF);
	dist[0] = 0LL;
	while (!que.empty()) {
		auto [cost, now] = que.top();
		que.pop();
		if (cost == dist[now]) {}
		for (auto [c, next] : edges[now]) {
			if (dist[next] > dist[now] + c) {
				dist[next] = dist[now] + c;
				que.push({dist[next], next});
			}
		}
	}
	cout << ((INF == dist[n - 1]) ? -1 : dist[n - 1]) << endl;
	return 0;
}
