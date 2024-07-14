#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static vector<int> BITS = {1,		2,		4,		8,		16,		 32,	 64,	128,
								 256,	512,	1024,	2048,	4096,	 8192,	 16384, 32768,
								 65536, 131072, 262144, 524288, 1048576, 2097152};

struct edge {
	struct edge *next;
	int v;
};

void dfs(vector<edge *> &adj, vector<int> &deg, vector<ll> &dp, int u, int n) {
	if (u == n) {
		int k = 0;
		for (int w = 0; w <= n; w++) {
			if (0 != deg[w]) {
				k += BITS[w];
			}
		}
		dp[k]++;
		return;
	}

	for (int i = 0; i < 2; i++) {
		dfs(adj, deg, dp, u - 1, n);
		for (edge *p = adj[u]; p != NULL; p = p->next) {
			deg[p->v] ^= 1;
		}
		deg[0] ^= deg[u];
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<edge *> adj(n + 1, NULL);
	vector<edge> e(m);
	vector<int> deg(n + 1, 0);
	for (int i = 0; i < m; i++) {
		int u, w;
		cin >> u >> w;
		e[i].v = u;
		e[i].next = adj[w];
		adj[w] = &(e[i]);
		deg[u] ^= 1;
		deg[w] ^= 1;
	}
	int n1 = n >> 1, prev = 0;
	vector<vector<ll>> dp(2, vector<ll>(1 << (n - n1 + 1), 0LL));
	dfs(adj, deg, dp[0], n, n1);
	for (int u = n1, cur = 1; u >= 1; u--, cur ^= 1, prev ^= 1) {
		for (int i = 0; i < BITS[u + 1]; i++) {
			if (0LL != dp[prev][i]) {
				long tmp = dp[prev][i];
				dp[prev][i] = 0LL;

				int j = i & (BITS[u] - 1);
				dp[cur][j] += tmp;
				if (0 != (i & BITS[u])) {
					j ^= BITS[0];
				}
				for (edge *p = adj[u]; p != NULL; p = p->next) {
					j ^= BITS[p->v];
				}
				dp[cur][j] += tmp;
			}
		}
	}
	cout << dp[prev][0] << endl;
	return 0;
}
