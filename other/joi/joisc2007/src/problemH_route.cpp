#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

struct edge {
	int from;
	int to;
	int cost;

	edge(int f, int t, int c) {
		from = f;
		to = t;
		cost = c;
	}
};

int get_edge2(int from, int to, vector<int> &x, vector<int> &y) {
	return (x[from] - x[to]) * (x[from] - x[to]) + (y[from] - y[to]) * (y[from] - y[to]);
}

bool ok(int from, int to, int next, vector<int> &x, vector<int> &y) {
	return get_edge2(from, to, x, y) + get_edge2(to, next, x, y) <= get_edge2(from, next, x, y);
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	vector<vector<edge>> e(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		e[a].emplace_back(edge(a, b, c));
		e[b].emplace_back(edge(b, a, c));
	}
	vector<int> dist(n, INF);
	dist[0] = 0;
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	for (int i = 1; i < n; i++) {
		visited[i][0] = true;
	}
	auto compare = [](edge a, edge b) { return b.cost < a.cost; };
	priority_queue<edge, vector<edge>, decltype(compare)> q{compare};
	q.push(edge(0, 0, 0));
	while (!q.empty()) {
		edge now = q.top();
		q.pop();
		dist[now.to] = min(dist[now.to], now.cost);
		if (!visited[now.from][now.to]) {
			for (edge next : e[now.to]) {
				if (ok(now.from, now.to, next.to, x, y)) {
					dist[next.to] = min(dist[next.to], now.cost + next.cost);
					q.push(edge(next.from, next.to, now.cost + next.cost));
				}
			}
			visited[now.from][now.to] = true;
		}
	}
	cout << ((INF == dist[1]) ? -1 : dist[1]) << endl;
	return 0;
}
