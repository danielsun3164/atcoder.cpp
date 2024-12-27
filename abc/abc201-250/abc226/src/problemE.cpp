#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

void dfs(vector<vector<int>> &edges, vector<bool> &used, int now, int &node, int &edge) {
	used[now] = true;
	node++;
	edge += edges[now].size();
	for (int next : edges[now]) {
		if (!used[next]) {
			dfs(edges, used, next, node, edge);
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<bool> used(n, false);
	mint answer = 1;
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			int node = 0, edge = 0;
			dfs(edges, used, i, node, edge);
			if (edge == (node << 1)) {
				answer *= 2;
			} else {
				answer = 0;
				break;
			}
		}
	}
	cout << answer.val() << endl;
	return 0;
}
