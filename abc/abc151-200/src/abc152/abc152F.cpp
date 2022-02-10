#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool dfs(int now, int index, int prev, int target, ll &mask, vector<vector<pair<int, int>>> &edges) {
	mask ^= (-1 == prev) ? 0LL : 1LL << index;
	if (now == target) {
		return true;
	}
	for (pair<int, int> next : edges[now]) {
		if ((next.first != prev) && dfs(next.first, next.second, now, target, mask, edges)) {
			return true;
		}
	}
	mask ^= (-1 == prev) ? 0LL : 1LL << index;
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<vector<pair<int, int>>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].push_back( { b, i });
		edges[b].push_back( { a, i });
	}
	int m;
	cin >> m;
	vector<ll> masks(m);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		ll mask = 0LL;
		dfs(u, -1, -1, v, mask, edges);
		masks[i] = mask;
	}
	ll ans = 0LL;
	for (int i = 0; i < (1 << m); i++) {
		ll mask = 0LL;
		for (int j = 0; j < m; j++) {
			if (i & (1 << j)) {
				mask |= masks[j];
			}
		}
		ans += ((1 & bitset<32>(i).count()) ? -1LL : 1LL) * (1LL << (n - 1 - bitset<64>(mask).count()));
	}
	cout << ans << endl;
	return 0;
}
