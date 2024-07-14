#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> r(m);
	vector<vector<int>> mp(n);
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		r[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> r[i][j];
			r[i][j]--;
			mp[r[i][j]].emplace_back(i);
		}
	}
	vector<int> p(n, -1), g(m, -1);
	p[0] = 0;
	queue<pair<int, int>> q;
	for (int gi : mp[0]) {
		q.push({gi, 1});
	}
	while (!q.empty()) {
		pair<int, int> now = q.front();
		q.pop();
		if (-1 == g[now.first]) {
			g[now.first] = now.second;
			for (int rij : r[now.first]) {
				if (-1 == p[rij]) {
					p[rij] = now.second;
					for (int ng : mp[rij]) {
						if (-1 == g[ng]) {
							q.push({ng, now.second + 1});
						}
					}
				}
			}
		}
	}
	for (int pi : p) {
		cout << pi << endl;
	}
	return 0;
}
