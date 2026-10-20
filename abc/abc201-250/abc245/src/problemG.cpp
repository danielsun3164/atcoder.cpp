#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, m, k, l;
	cin >> n >> m >> k >> l;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	priority_queue<tuple<ll, int, int>> que;
	for (int i = 0; i < l; i++) {
		int b;
		cin >> b, b--;
		que.push({0LL, b, a[b]});
	}
	vector<vector<pair<int, ll>>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		ll c;
		cin >> u >> v >> c;
		u--, v--;
		edges[u].push_back({v, c});
		edges[v].push_back({u, c});
	}
	vector<int> count(n, 0), country(n);
	vector<ll> d(n, -1), d2(n, -1);
	while (!que.empty()) {
		auto [z, x, y] = que.top();
		que.pop();
		if (0 == count[x]) {
			d[x] = -z;
			country[x] = y;
		} else if ((1 == count[x]) && (y != country[x])) {
			d2[x] = -z;
		} else {
			continue;
		}
		count[x]++;
		for (auto &p : edges[x]) {
			que.push({z - p.second, p.first, y});
		}
	}
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << ((a[i] != country[i]) ? d[i] : d2[i]);
	}
	cout << endl;
	return 0;
}
