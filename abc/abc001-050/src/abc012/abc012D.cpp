#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> dist(n, vector<int>(n, INF));
	for (int i = 0; i < n; i++) {
		dist[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b, t;
		cin >> a >> b >> t;
		a--;
		b--;
		dist[a][b] = dist[b][a] = t;
	}
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	int ans = INF;
	for (int i = 0; i < n; i++) {
		ans = min(ans, *max_element(dist[i].begin(), dist[i].end()));
	}
	cout << ans << endl;
	return 0;
}
