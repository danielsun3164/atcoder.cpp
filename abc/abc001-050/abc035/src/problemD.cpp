#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

vector<ll> dijkstra(int src, vector<vector<pair<int, int>>> &edges) {
	int n = edges.size();
	vector<ll> dist(n, INF);
	dist[src] = 0LL;
	queue<pair<ll, int>> que;
	que.push( { 0L, src });
	while (!que.empty()) {
		pair<ll, int> now = que.front();
		que.pop();
		if (now.first == dist[now.second]) {
			for (pair<int, int> e : edges[now.second]) {
				if (dist[e.first] > dist[now.second] + e.second) {
					dist[e.first] = dist[now.second] + e.second;
					que.push( { dist[e.first], e.first });
				}
			}
		}
	}
	return dist;
}

int main(void) {
	int n, m;
	ll t;
	cin >> n >> m >> t;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<pair<int, int>>> edges(n), redges(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		edges[a].push_back( { b, c });
		redges[b].push_back( { a, c });
	}
	vector<ll> dist = dijkstra(0, edges), rdist = dijkstra(0, redges);
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		if (dist[i] + rdist[i] < t) {
			answer = max(answer, (t - dist[i] - rdist[i]) * a[i]);
		}
	}
	cout << answer << endl;
	return 0;
}
