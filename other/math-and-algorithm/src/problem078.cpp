#include <bits/stdc++.h>
using namespace std;

const static int MAX = 120;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> dist(n, -1);
	queue<int> que;
	dist[0] = 0;
	que.push(0);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		for (int next : edges[now]) {
			if (-1 == dist[next]) {
				dist[next] = min(MAX, dist[now] + 1);
				que.push(next);
			}
		}
	}
	for (int di : dist) {
		cout << ((-1 == di) ? MAX : di) << endl;
	}
	return 0;
}
