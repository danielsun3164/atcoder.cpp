#include <bits/stdc++.h>
using namespace std;

void dfs1(vector<vector<int>> &g, vector<int> &counts, int now, int prev) {
	for (int next : g[now]) {
		if (next != prev) {
			dfs1(g, counts, next, now);
			if (0 == counts[next]) {
				counts[now]++;
			}
		}
	}
}

void dfs2(vector<vector<int>> &g, vector<int> &counts, int now, int prev, bool ok, int &answer) {
	if ((now > 0) && (counts[now] > 0) && (counts[prev] > 0)) {
		ok = false;
	}
	if (counts[now] > 1) {
		ok = true;
	}
	if ((0 == counts[now]) && ok) {
		answer++;
	}
	for (int next : g[now]) {
		if (next != prev) {
			dfs2(g, counts, next, now, ok, answer);
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> g(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		g[u].emplace_back(v);
		g[v].emplace_back(u);
	}
	vector<int> counts(n, 0);
	dfs1(g, counts, 0, -1);
	int answer = 0;
	dfs2(g, counts, 0, -1, counts[0] == 0, answer);
	cout << answer << endl;
	return 0;
}
