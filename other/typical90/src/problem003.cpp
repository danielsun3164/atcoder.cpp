#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<int>> &edges, int src) {
	vector<int> dist(n, INF);
	dist[src] = 0;
	queue<int> que;
	que.push(src);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		for (int next : edges[now]) {
			if (INF == dist[next]) {
				dist[next] = dist[now] + 1;
				que.push(next);
			}
		}
	}
	return dist;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	int src = 0;
	vector<int> dist = dijkstra(n, edges, src);
	src = distance(dist.begin(), max_element(dist.begin(), dist.end()));
	dist = dijkstra(n, edges, src);
	int max_value = *max_element(dist.begin(), dist.end());
	cout << max_value + 1 << endl;
	return 0;
}
