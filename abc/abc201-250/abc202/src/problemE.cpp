#include <bits/stdc++.h>
using namespace std;

int t;

void dfs(vector<vector<int>> &childrens, vector<vector<int>> &in_depth, int now, vector<int> &depths, vector<int> &in,
		vector<int> &out) {
	in[now] = t++;
	in_depth[depths[now]].emplace_back(in[now]);
	for (int next : childrens[now]) {
		depths[next] = depths[now] + 1;
		dfs(childrens, in_depth, next, depths, in, out);
	}
	out[now] = t++;
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> childrens(n), in_depth(n);
	for (int i = 1; i < n; i++) {
		int p;
		cin >> p;
		childrens[p - 1].emplace_back(i);
	}
	t = 0;
	vector<int> depths(n), in(n), out(n);
	depths[0] = 0;
	dfs(childrens, in_depth, 0, depths, in, out);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int u, d;
		cin >> u >> d;
		u--;
		vector<int> &v = in_depth[d];
		cout << (lower_bound(v.begin(), v.end(), out[u]) - lower_bound(v.begin(), v.end(), in[u])) << endl;
	}
	return 0;
}
