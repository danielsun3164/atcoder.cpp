#include <bits/stdc++.h>
using namespace std;

int answer = 0;

void dfs(int now, int count, vector<vector<int>> &edges, vector<bool> &used) {
	int n = edges.size();
	if (count == n) {
		answer++;
	}
	for (int next : edges[now]) {
		if (!used[next]) {
			used[next] = true;
			dfs(next, count + 1, edges, used);
			used[next] = false;
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
		a--, b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<bool> used(n, false);
	used[0] = true;
	dfs(0, 1, edges, used);
	cout << answer << endl;
	return 0;
}
