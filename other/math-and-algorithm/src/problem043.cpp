#include <bits/stdc++.h>
using namespace std;

void dfs(int now, vector<vector<int>> &edges, vector<bool> &visited) {
	visited[now] = true;
	for (int next : edges[now]) {
		if (!visited[next]) {
			dfs(next, edges, visited);
		}
	}
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
	vector<bool> visited(n, false);
	dfs(0, edges, visited);
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			cout << "The graph is not connected." << endl;
			return 0;
		}
	}
	cout << "The graph is connected." << endl;
	return 0;
}
