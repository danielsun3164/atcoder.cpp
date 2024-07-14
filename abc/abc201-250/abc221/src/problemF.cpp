#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int N = 5;

void dfs(int k, int p, int idx, int num, int &cnt, int blc, vector<vector<int>> &edges,
		 vector<vector<int>> &d, vector<int> &mx, vector<int> &mv) {
	if (-1 == p) {
		d[k][idx] = 0;
	} else {
		d[k][idx] = d[p][idx] + 1;
	}
	if (mx[idx] < d[k][idx]) {
		mx[idx] = d[k][idx];
		mv[idx] = k;
	}
	if (num == d[k][idx]) {
		cnt++;
	}
	for (int i = 0; i < int(edges[k].size()); i++) {
		if ((edges[k][i] != blc) && (d[edges[k][i]][idx] < 0)) {
			dfs(edges[k][i], k, idx, num, cnt, blc, edges, d, mx, mv);
		}
	}
}

int main(void) {
	int n, u, v;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<vector<int>> d(n, vector<int>(N, -1));
	vector<int> mx(N, -1), mv(N, 0), a;
	int blc = -1, num = 0, cnt = 0;
	dfs(0, -1, 0, num, cnt, blc, edges, d, mx, mv);
	dfs(mv[0], -1, 1, num, cnt, blc, edges, d, mx, mv);
	dfs(mv[1], -1, 2, num, cnt, blc, edges, d, mx, mv);
	if (1 & mx[1]) {
		for (int i = 0; i < n; i++) {
			if ((d[i][1] == mx[1] >> 1) && (d[i][2] == ((mx[1] >> 1) + 1))) {
				u = i;
			}
			if ((d[i][2] == mx[1] >> 1) && (d[i][1] == ((mx[1] >> 1) + 1))) {
				v = i;
			}
		}
		num = mx[1] >> 1;
		blc = v;
		cnt = 0;
		dfs(u, -1, 3, num, cnt, blc, edges, d, mx, mv);
		a.emplace_back(cnt);
		blc = u;
		cnt = 0;
		dfs(v, -1, 3, num, cnt, blc, edges, d, mx, mv);
		a.emplace_back(cnt);
	} else {
		for (int i = 0; i < n; i++) {
			if ((d[i][1] == mx[1] >> 1) && (d[i][2] == mx[1] >> 1)) {
				u = i;
			}
		}
		num = (mx[1] >> 1) - 1;
		blc = u;
		for (int i = 0; i < int(edges[u].size()); i++) {
			cnt = 0;
			dfs(edges[u][i], -1, 3, num, cnt, blc, edges, d, mx, mv);
			a.emplace_back(cnt);
		}
	}
	mint ans = 1;
	for (int ai : a) {
		ans *= ai + 1;
	}
	for (int ai : a) {
		ans -= ai;
	}
	ans -= 1;
	cout << ans.val() << endl;
	return 0;
}
