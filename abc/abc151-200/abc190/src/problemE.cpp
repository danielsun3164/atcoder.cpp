#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

vector<int> bfs(vector<vector<int>> &childrens, int s) {
	vector<int> d(childrens.size(), INF);
	queue<int> que;
	d[s] = 0;
	que.push(s);
	while (!que.empty()) {
		int x = que.front();
		que.pop();
		for (int n : childrens[x]) {
			if (d[n] > d[x] + 1) {
				d[n] = d[x] + 1;
				que.push(n);
			}
		}
	}
	return d;
}

int main(void) {
	int n, m, k;
	cin >> n >> m;
	vector<vector<int>> childrens(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		childrens[a].emplace_back(b);
		childrens[b].emplace_back(a);
	}
	cin >> k;
	vector<int> c(k);
	for (int i = 0; i < k; i++) {
		cin >> c[i];
		c[i]--;
	}
	vector<vector<int>> d(k, vector<int>(k));
	for (int i = 0; i < k; i++) {
		vector<int> t = bfs(childrens, c[i]);
		for (int j = 0; j < k; j++) {
			d[i][j] = t[c[j]];
		}
	}
	vector<vector<int>> dp(1 << k, vector<int>(k, INF));
	for (int i = 0; i < k; i++) {
		dp[1 << i][i] = 1;
	}
	for (int i = 2; i < (1 << k); i++) {
		for (int j = 0; j < k; j++) {
			if (i & (1 << j)) {
				for (int l = 0; l < k; l++) {
					if ((j != l) && (i & (1 << l))) {
						dp[i][j] = min(dp[i][j], dp[i ^ (1 << j)][l] + d[l][j]);
					}
				}
			}
		}
	}
	int ans = *min_element(dp.back().begin(), dp.back().end());
	cout << ((INF == ans) ? -1 : ans) << endl;
	return 0;
}
