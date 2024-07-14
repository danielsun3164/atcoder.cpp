#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<pair<int, int>>> &edges, int src) {
	vector<int> dist(n, INF);
	dist[src] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push({0, src});
	while (!que.empty()) {
		pair<int, int> p = que.top();
		que.pop();
		if (p.first == dist[p.second]) {
			for (pair<int, int> next : edges[p.second]) {
				if (dist[next.second] > p.first + next.first) {
					dist[next.second] = p.first + next.first;
					que.push({dist[next.second], next.second});
				}
			}
		}
	}
	return dist;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		edges[a - 1].emplace_back(make_pair(c, b - 1));
		edges[b - 1].emplace_back(make_pair(c, a - 1));
	}
	vector<int> dist0 = dijkstra(n, edges, 0), distn = dijkstra(n, edges, n - 1);
	for (int i = 0; i < n; i++) {
		cout << (dist0[i] + distn[i]) << endl;
	}
	return 0;
}
