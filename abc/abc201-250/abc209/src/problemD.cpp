#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &edges, vector<int> &nodes, int now, int prev) {
	for (int next : edges[now]) {
		if (next != prev) {
			nodes[next] = 1 - nodes[now];
			dfs(edges, nodes, next, now);
		}
	}
}

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> nodes(n);
	nodes[0] = 0;
	dfs(edges, nodes, 0, -1);
	while (q > 0) {
		q--;
		int c, d;
		cin >> c >> d;
		cout << ((nodes[c - 1] == nodes[d - 1]) ? "Town" : "Road") << endl;
	}
	return 0;
}
