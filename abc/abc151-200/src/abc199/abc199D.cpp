#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

using ll = long long;

ll calc(vector<vector<int>> &edges, vector<int> &group, vector<int> &color, long unsigned int idx) {
	if (idx == group.size()) {
		return 1LL;
	}
	int u = group[idx];
	ll ans = 0LL;
	for (int i = 1; i <= 3; i++) {
		bool can_use = true;
		for (int v : edges[u]) {
			if (i == color[v]) {
				can_use = false;
				break;
			}
		}
		if (can_use) {
			color[u] = i;
			ans += calc(edges, group, color, idx + 1);
		}
	}
	color[u] = 0;
	return ans;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	atcoder::dsu d(n);
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
		d.merge(a, b);
	}
	vector<int> color(n, 0);
	ll ans = 1L;
	for (int i = 0; i < n; i++) {
		if (i == d.leader(i)) {
			vector<int> group;
			queue<int> que;
			que.push(i);
			group.emplace_back(i);
			while (!que.empty()) {
				int u = que.front();
				que.pop();
				for (int v : edges[u]) {
					if (group.end() == find(group.begin(), group.end(), v)) {
						que.push(v);
						group.emplace_back(v);
					}
				}
			}
			ans *= calc(edges, group, color, 0);
		}
	}
	cout << ans << endl;
	return 0;
}
