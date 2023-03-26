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
	int answer = 0;
	for (int i = 0; i < n; i++) {
		sort(g[i].begin(), g[i].end());
		if (g[i].begin() + 1 == lower_bound(g[i].begin(), g[i].end(), i)) {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}
