#include <bits/stdc++.h>
using namespace std;

static const int INF = INT_MAX >> 1;

void warshall_floyd(int n, vector<vector<int>> &dist) {
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> dist(n, vector<int>(n, INF));
	for (int i = 0; i < n; i++) {
		dist[i][i] = 0;
	}
	for (int i = 0; i < k; i++) {
		int t;
		cin >> t;
		if (0 == t) {
			int a, b;
			cin >> a >> b;
			a--;
			b--;
			cout << ((INF == dist[a][b]) ? -1 : dist[a][b]) << endl;
		} else {
			int c, d, e;
			cin >> c >> d >> e;
			c--;
			d--;
			if (dist[c][d] > e) {
				dist[c][d] = e;
				dist[d][c] = e;
				warshall_floyd(n, dist);
			}
		}
	}
	return 0;
}
