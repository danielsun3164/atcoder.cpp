#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> a;
vector<vector<int>> edges;

ll dfs(int now, int prev, ll value) {
	ll result = 0;
	for (int next : edges[now]) {
		if (next != prev) {
			result += dfs(next, now, value);
		}
	}
	return max(0LL, result - 1) + ((a[now] >= value) ? 1 : 0);
}

int main(void) {
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	edges.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	ll low = 0, high = INT_MAX;
	while (high - low > 1) {
		ll med = (low + high) >> 1;
		if (dfs(0, -1, med)) {
			low = med;
		} else {
			high = med;
		}
	}
	cout << low << endl;
	return 0;
}
