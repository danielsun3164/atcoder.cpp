#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

vector<vector<int>> g(MAX + 1);
vector<bool> visited(MAX + 1);

int dfs(int current) {
	int r = 1;
	visited[current] = true;
	for (int v : g[current]) {
		if (!visited[v]) {
			r = max(r, dfs(v) + 1);
		}
	}
	visited[current] = false;
	return r;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int r = 0;
	for (int i = 0; i <= MAX; i++) {
		r = max(r, dfs(i));
	}
	cout << r << endl;
	return 0;
}
