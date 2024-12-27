#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

vector<int> dijkstra(int start, vector<vector<int>> &edges) {
	vector<int> dist(edges.size(), INF);
	dist[start] = 0;
	queue<int> que;
	que.push(start);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		for (int next : edges[now]) {
			if (dist[next] > dist[now] + 1) {
				dist[next] = dist[now] + 1;
				que.push(next);
			}
		}
	}
	return dist;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> dist = dijkstra(0, edges);
	for (int di : dist) {
		cout << ((INF == di) ? -1 : di) << endl;
	}
	return 0;
}
