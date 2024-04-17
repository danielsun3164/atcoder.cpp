#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

vector<ll> dijkstra(vector<vector<pair<int, ll>>> &edges, int start) {
	int n = edges.size();
	vector<ll> dist(n, INF);
	dist[start] = 0LL;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push( { 0LL, start });
	while (!que.empty()) {
		auto [cost, now] = que.top();
		que.pop();
		if (cost == dist[now]) {
			for (pair<int, ll> next : edges[now]) {
				if (dist[next.first] > dist[now] + next.second) {
					dist[next.first] = dist[now] + next.second;
					que.push( { dist[next.first], next.first });
				}
			}
		}
	}
	return dist;
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<pair<int, ll>>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		edges[a].push_back( { b, c });
		edges[b].push_back( { a, c });
	}
	vector<int> d(n);
	for (int &di : d) {
		cin >> di;
	}
	int s = 0, t = -1, u = -1;
	{
		vector<ll> dist = dijkstra(edges, s);
		ll mx = 0;
		for (int i = 0; i < n; i++) {
			if ((i != s) && (mx < dist[i] + d[i])) {
				mx = dist[i] + d[i];
				t = i;
			}
		}
	}
	vector<ll> dist_t = dijkstra(edges, t);
	{
		ll mx = 0;
		for (int i = 0; i < n; i++) {
			if ((i != t) && (mx < dist_t[i] + d[i])) {
				mx = dist_t[i] + d[i];
				u = i;
			}
		}
	}
	vector<ll> dist_u = dijkstra(edges, u);
	for (int i = 0; i < n; i++) {
		ll answer = -1LL;
		if (i != t) {
			answer = max(answer, dist_t[i] + d[t]);
		}
		if (i != u) {
			answer = max(answer, dist_u[i] + d[u]);
		}
		cout << answer << endl;
	}
	return 0;
}
