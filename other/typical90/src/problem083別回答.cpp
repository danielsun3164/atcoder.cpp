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
	for (int i = 0; i < n; i++) {
		sort(g[i].begin(), g[i].end());
	}
	int q;
	cin >> q;
	vector<int> x(q), y(q), color(n, 1);
	for (int i = 0; i < q; i++) {
		cin >> x[i] >> y[i];
		x[i]--;
	}
	int b = int(sqrt(m << 1));
	for (int i = 0; i < b; i++) {
		int ql = i * q / b, qr = (i + 1) * q / b;
		for (int j = ql; j < qr; j++) {
			int now_color = color[x[j]];
			for (int k = ql; k < j; k++) {
				if ((x[j] == x[k]) || binary_search(g[x[k]].begin(), g[x[k]].end(), x[j])) {
					now_color = y[k];
				}
			}
			cout << now_color << endl;
		}
		for (int j = ql; j < qr; j++) {
			bool update = true;
			for (int k = j + 1; k < qr; k++) {
				if (x[k] == x[j]) {
					update = false;
					break;
				}
			}
			if (update) {
				color[x[j]] = y[j];
				for (int k : g[x[j]]) {
					color[k] = y[j];
				}
			}
		}
	}
	return 0;
}
