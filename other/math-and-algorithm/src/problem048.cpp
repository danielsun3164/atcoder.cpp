#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;
const static int TEN = 10;

vector<int> dijkstra(int start, vector<vector<pair<int, int>>> &edges) {
	int n = edges.size();
	vector<int> dist(n, INF);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push(make_pair(0, start));
	while (!que.empty()) {
		auto [cost, now] = que.top();
		que.pop();
		for (auto [c, next] : edges[now]) {
			if (dist[next] > cost + c) {
				dist[next] = cost + c;
				que.push(make_pair(dist[next], next));
			}
		}
	}
	return dist;
}

int main() {
	int k;
	cin >> k;
	vector<vector<pair<int, int>>> edges(k);
	for (int i = 0; i < k; i++) {
		for (int j = (i ? 0 : 1); j < TEN; j++) {
			edges[i].push_back({j, (i * TEN + j) % k});
		}
	}
	cout << dijkstra(0, edges)[0] << endl;
	return 0;
}
