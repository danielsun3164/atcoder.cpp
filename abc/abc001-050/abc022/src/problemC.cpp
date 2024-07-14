#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

ll dijkstra(vector<vector<tuple<int, long, int>>> &edges, vector<bool> &used, int src, int target) {
	vector<ll> dist(edges.size(), INF);
	dist[src] = 0LL;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push({0LL, src});
	while (!que.empty()) {
		pair<ll, int> now = que.top();
		que.pop();
		int to = now.second;
		for (tuple<int, ll, int> t : edges[to]) {
			if ((!used[get<2>(t)]) && (dist[to] == now.first)) {
				if (dist[get<0>(t)] > dist[to] + get<1>(t)) {
					dist[get<0>(t)] = dist[to] + get<1>(t);
					que.push({dist[get<0>(t)], get<0>(t)});
				}
			}
		}
	}
	return dist[target];
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<tuple<int, long, int>>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		ll l;
		cin >> u >> v >> l;
		u--;
		v--;
		edges[u].emplace_back(make_tuple(v, l, i));	 // @suppress("Invalid arguments")
		edges[v].emplace_back(make_tuple(u, l, i));	 // @suppress("Invalid arguments")
	}
	vector<bool> used(m, false);
	ll ans = INF;
	for (tuple<int, long, int> t : edges[0]) {
		used[get<2>(t)] = true;
		ans = min(ans, dijkstra(edges, used, get<0>(t), 0) + get<1>(t));
		used[get<2>(t)] = false;
	}
	cout << ((INF == ans) ? -1LL : ans) << endl;
	return 0;
}
