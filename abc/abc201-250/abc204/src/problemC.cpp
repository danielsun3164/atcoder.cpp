#include <bits/stdc++.h>
using namespace std;

void dfs(int n, vector<vector<int>> &edges, int src, vector<bool> &visited) {
	visited[src] = true;
	for (int next : edges[src]) {
		if (!visited[next]) {
			dfs(n, edges, next, visited);
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		edges[a - 1].emplace_back(b - 1);
	}
	vector<bool> visited(n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		fill(visited.begin(), visited.end(), false);
		dfs(n, edges, i, visited);
		for (int j = 0; j < n; j++) {
			if (visited[j]) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
