#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}
	int b = int(sqrt(m << 1));
	vector<int> large;
	for (int i = 0; i < n; i++) {
		if (int(g[i].size()) >= b) {
			large.emplace_back(i);
		}
	}
	vector<vector<bool>> link(n, vector<bool>(large.size(), false));
	for (int i = 0; i < int(large.size()); i++) {
		for (int j : g[large[i]]) {
			link[j][i] = true;
		}
		link[large[i]][i] = true;
	}
	vector<int> update(n, 0), update_large(large.size(), 0);
	int q;
	cin >> q;
	vector<int> x(q + 1), color(q + 1);
	color[0] = 1;
	for (int i = 1; i <= q; i++) {
		cin >> x[i] >> color[i];
		x[i]--;
		int last = update[x[i]];
		for (int j = 0; j < int(large.size()); j++) {
			if (link[x[i]][j]) {
				last = max(last, update_large[j]);
			}
		}
		cout << color[last] << endl;
		if (int(g[x[i]].size()) < b) {
			update[x[i]] = i;
			for (int next : g[x[i]]) {
				update[next] = i;
			}
		} else {
			update_large[distance(large.begin(), find(large.begin(), large.end(), x[i]))] = i;
		}
	}
	return 0;
}
