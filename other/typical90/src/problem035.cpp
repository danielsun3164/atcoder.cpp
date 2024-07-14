#include <bits/stdc++.h>
using namespace std;

void build_tree(int &idx, int prev, int now, vector<vector<int>> &g, vector<vector<int>> &par,
				vector<int> &depth, vector<int> &id) {
	par[0][now] = prev;
	id[now] = idx++;
	for (int next : g[now]) {
		if (prev != next) {
			depth[next] = depth[now] + 1;
			build_tree(idx, now, next, g, par, depth, id);
		}
	}
}

int lca(vector<vector<int>> &par, vector<int> &depth, int va, int vb) {
	int n = par.size();
	if (depth[va] < depth[vb]) {
		swap(va, vb);
	}
	for (int i = n - 1; i >= 0; i--) {
		if (depth[va] - depth[vb] >= (1 << i)) {
			va = par[i][va];
		}
	}
	if (va == vb) {
		return va;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (par[i][va] != par[i][vb]) {
			va = par[i][va];
			vb = par[i][vb];
		}
	}
	return par[0][va];
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> g(n + 1);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}
	int bits = 0;
	while ((1 << bits) < n) {
		bits++;
	}
	vector<vector<int>> par(bits, vector<int>(n + 1));
	vector<int> depth(n + 1), id(n + 1);
	depth[1] = 0;
	int idx = 0;
	build_tree(idx, 1, 1, g, par, depth, id);
	for (int i = 1; i < bits; i++) {
		for (int j = 1; j <= n; j++) {
			par[i][j] = par[i - 1][par[i - 1][j]];
		}
	}
	int q;
	cin >> q;
	while (q--) {
		int k;
		cin >> k;
		vector<int> v(k);
		for (int i = 0; i < k; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), [&](int va, int vb) { return id[va] < id[vb]; });
		int answer = 0;
		for (int i = 0; i < k; i++) {
			answer += depth[v[i]];
			answer -= depth[lca(par, depth, v[i], v[(i + 1) % k])];
		}
		cout << answer << endl;
	}
	return 0;
}
