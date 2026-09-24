#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;
using namespace atcoder;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> f(n, vector<int>(n, 0));
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		f[a][b] = 1;
		f[b][a] = 2;
	}
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a.push_back({i, j});
		}
	}
	sort(a.begin(), a.end());
	int asize = a.size();
	vector<int> answer;
	for (int i = 0; i < n; i++) {
		vector<vector<int>> g = f;
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			if (0 == g[i][j]) {
				g[i][j] = 1;
				g[j][i] = 2;
			}
		}
		int win = 0;
		for (int j = 0; j < n; j++) {
			if ((i != j) && (1 == g[i][j])) {
				win++;
			}
		}
		if (0 == win) {
			continue;
		}
		int s = asize + n, t = s + 1;
		mf_graph<int> mg(t + 1);
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int p = lower_bound(a.begin(), a.end(), make_pair(j, k)) - a.begin();
				if (0 == g[j][k]) {
					mg.add_edge(p, asize + j, 1);
					mg.add_edge(p, asize + k, 1);
				} else if (1 == g[j][k]) {
					mg.add_edge(p, asize + j, 1);
				} else {
					mg.add_edge(p, asize + k, 1);
				}
			}
		}
		for (int j = 0; j < asize; j++) {
			mg.add_edge(s, j, 1);
		}
		for (int j = 0; j < n; j++) {
			mg.add_edge(asize + j, t, win - ((i == j) ? 0 : 1));
		}
		if (mg.flow(s, t) == n * (n - 1) / 2) {
			answer.emplace_back(i + 1);
		}
	}
	for (int i = 0; i < int(answer.size()); i++) {
		cout << (i ? " " : "") << answer[i];
	}
	cout << endl;
	return 0;
}
