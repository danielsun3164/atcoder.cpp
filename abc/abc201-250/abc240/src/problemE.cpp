#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edges;
vector<int> l, r;
int id;

void dfs(int now, int prev) {
	l[now] = id;
	bool first = true;
	for (int next : edges[now]) {
		if (next != prev) {
			l[next] = first ? id : ++id;
			first = false;
			dfs(next, now);
		}
	}
	r[now] = id;
}

int main(void) {
	int n;
	cin >> n;
	edges.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	l.resize(n, -1);
	r.resize(n, -1);
	id = 1;
	for (int i = 0; i < n; i++) {
		if (-1 == l[i]) {
			dfs(0, -1);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << l[i] << " " << r[i] << endl;
	}
	return 0;
}
