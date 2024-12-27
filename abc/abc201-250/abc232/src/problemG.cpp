#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

vector<ll> dijkstra(vector<vector<pair<int, ll>>> edges, int start) {
	vector<ll> dist(edges.size(), INF);
	dist[start] = 0LL;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push({0LL, start});
	while (!que.empty()) {
		auto [cost, now] = que.top();
		que.pop();
		if (cost == dist[now]) {
			for (auto [next, nc] : edges[now]) {
				if (dist[next] > dist[now] + nc) {
					dist[next] = dist[now] + nc;
					que.push({dist[next], next});
				}
			}
		}
	}
	return dist;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	vector<pair<ll, int>> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i].first;
		b[i].second = i;
	}
	sort(b.begin(), b.end());
	vector<vector<pair<int, ll>>> edges(n << 1);
	for (int i = 0; i < n - 1; i++) {
		edges[b[i].second + n].push_back({b[i + 1].second + n, b[i + 1].first - b[i].first});
	}
	for (int i = 0; i < n; i++) {
		edges[i].push_back({b[0].second + n, a[i] + b[0].first});
		edges[i + n].push_back({i, 0LL});
		auto itr = lower_bound(b.begin(), b.end(), make_pair(m - a[i], -1));
		if (itr != b.end()) {
			edges[i].push_back({itr->second + n, a[i] + itr->first - m});
		}
	}
	cout << dijkstra(edges, 0)[n - 1] << endl;
	return 0;
}
