#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(int now, int prev, vector<vector<int>> &edges, vector<int> &dists, vector<int> &subs) {
	for (int next : edges[now]) {
		if (next != prev) {
			dists[next] = dists[now] + 1;
			dfs(next, now, edges, dists, subs);
			subs[now] += subs[next];
		}
	}
}

void dfs2(int n, int now, int prev, vector<vector<int>> &edges, vector<int> &subs,
		  vector<ll> &answers) {
	for (int next : edges[now]) {
		if (next != prev) {
			answers[next] = answers[now] + n - 2 * subs[next];
			dfs2(n, next, now, edges, subs, answers);
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<int> dists(n), subs(n, 1);
	dists[0] = 0LL;
	dfs(0, -1, edges, dists, subs);
	vector<ll> answers(n);
	answers[0] = accumulate(dists.begin(), dists.end(), 0LL);
	dfs2(n, 0, -1, edges, subs, answers);
	for (ll ai : answers) {
		cout << ai << endl;
	}
	return 0;
}
