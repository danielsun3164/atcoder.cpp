#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = INT_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edges[u - 1].emplace_back(v - 1);
		edges[v - 1].emplace_back(u - 1);
	}
	vector<vector<int>> dist(1 << n, vector<int>(n, INF));
	queue<pair<int, int>> que;
	for (int i = 0; i < n; i++) {
		dist[0][i] = 0;
		dist[1 << i][i] = 1;
		que.push({1 << i, i});
	}
	while (!que.empty()) {
		auto [state, now] = que.front();
		que.pop();
		for (int next : edges[now]) {
			int new_state = state ^ (1 << next);
			if (INF == dist[new_state][next]) {
				dist[new_state][next] = dist[state][now] + 1;
				que.push({new_state, next});
			}
		}
	}
	ll answer = 0;
	for (int i = 0; i < (1 << n); i++) {
		answer += *min_element(dist[i].begin(), dist[i].end());
	}
	cout << answer << endl;
	return 0;
}
