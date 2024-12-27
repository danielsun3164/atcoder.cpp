#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int MAX = 100'000;

bool dfs(int now, int prev, int goal, vector<vector<pair<int, int>>> &edges, vector<int> &counts) {
	if (now == goal) {
		return true;
	}
	for (auto [next, i] : edges[now]) {
		if (next != prev) {
			if (dfs(next, now, goal, edges, counts)) {
				counts[i]++;
				return true;
			}
		}
	}
	return false;
}

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(m);
	for (int &ai : a) {
		cin >> ai;
		ai--;
	}
	vector<vector<pair<int, int>>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].push_back({v, i});
		edges[v].push_back({u, i});
	}
	vector<int> counts(n - 1, 0);
	for (int i = 0; i < m - 1; i++) {
		dfs(a[i], -1, a[i + 1], edges, counts);
	}
	int sum = accumulate(counts.begin(), counts.end(), 0);
	if ((1 & (sum + k)) || (sum + k < 0)) {
		cout << 0 << endl;
		return 0;
	}
	vector<mint> dp(MAX + 1);
	dp[0] = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = MAX; j >= counts[i]; j--) {
			dp[j] += dp[j - counts[i]];
		}
	}
	cout << dp[(sum + k) >> 1].val() << endl;
	return 0;
}
