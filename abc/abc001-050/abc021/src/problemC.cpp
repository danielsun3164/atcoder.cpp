#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const int INF = INT_MAX >> 1;

int main(void) {
	int n, a, b, m;
	cin >> n >> a >> b >> m;
	a--;
	b--;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		edges[x].emplace_back(y);
		edges[y].emplace_back(x);
	}
	vector<int> dist(n, INF);
	dist[a] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push({0, a});
	vector<mint> ans(n, 0);
	ans[a] = 1;
	while (!que.empty()) {
		pair<int, int> now = que.top();
		que.pop();
		int to = now.second;
		if (dist[to] == now.first) {
			for (int next : edges[to]) {
				if (dist[next] > dist[to] + 1) {
					dist[next] = dist[to] + 1;
					ans[next] = ans[to];
					que.push({dist[next], next});
				} else if (dist[next] == dist[to] + 1) {
					ans[next] += ans[to];
				}
			}
		}
	}
	cout << ans[b].val() << endl;
	return 0;
}
