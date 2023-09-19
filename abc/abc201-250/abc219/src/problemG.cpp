#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> u(m), v(m);
	vector<vector<int>> edges(n), edges2(n);
	for (int i = 0; i < m; i++) {
		cin >> u[i] >> v[i];
		u[i]--;
		v[i]--;
		edges[u[i]].push_back(v[i]);
		edges[v[i]].push_back(u[i]);
	}
	int p = int(sqrt(m << 1));
	for (int i = 0; i < n; i++) {
		for (int next : edges[i]) {
			if (int(edges[next].size()) >= p) {
				edges2[i].push_back(next);
			}
		}
	}
	vector<pair<int, int>> a(n), b(n);
	for (int i = 0; i < n; i++) {
		a[i] = b[i] = pair(0, i + 1);
	}
	for (int i = 1; i <= q; i++) {
		int x;
		cin >> x;
		x--;
		for (int next : edges2[x]) {
			if (a[x].first < b[next].first) {
				a[x] = b[next];
			}
		}
		a[x].first = i;
		b[x] = a[x];
		if (int(edges[x].size()) < p) {
			for (int next : edges[x]) {
				a[next] = a[x];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int next : edges2[i]) {
			if (a[i].first < b[next].first) {
				a[i] = b[next];
			}
		}
		if (i) {
			cout << " ";
		}
		cout << a[i].second;
	}
	cout << endl;
	return 0;
}
