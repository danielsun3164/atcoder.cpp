#include <bits/stdc++.h>
using namespace std;

int log2(int n) {
	int k = 0;
	while (n > 0) {
		k++;
		n >>= 1;
	}
	return k;
}

void dfs(vector<vector<int>> &edges, int now, vector<vector<int>> &parents, vector<int> &depths,
		 int parent, int depth) {
	parents[0][now] = parent;
	depths[now] = depth;
	for (int next : edges[now]) {
		if (parent != next) {
			dfs(edges, next, parents, depths, now, depth + 1);
		}
	}
}

int lca(int k, vector<vector<int>> &parents, vector<int> &depths, int u, int v) {
	if (depths[u] < depths[v]) {
		swap(u, v);
	}
	for (int i = 0; i < k; i++) {
		if (1 & ((depths[u] - depths[v]) >> i)) {
			u = parents[i][u];
		}
	}
	if (u == v) {
		return u;
	}
	for (int i = k - 1; i >= 0; i--) {
		if (parents[i][u] != parents[i][v]) {
			u = parents[i][u];
			v = parents[i][v];
		}
	}
	return parents[0][u];
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		edges[x].emplace_back(y);
		edges[y].emplace_back(x);
	}
	int k = log2(n);
	vector<vector<int>> parents(k, vector<int>(n, -1));
	vector<int> depths(n, -1);
	dfs(edges, 0, parents, depths, -1, 0);
	for (int i = 0; i < k - 1; i++) {
		for (int j = 0; j < n; j++) {
			if (parents[i][j] >= 0) {
				parents[i + 1][j] = parents[i][parents[i][j]];
			}
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		int p = lca(k, parents, depths, a, b);
		cout << (depths[a] - depths[p] + depths[b] - depths[p] + 1) << endl;
	}
	return 0;
}
