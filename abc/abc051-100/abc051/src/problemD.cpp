#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

vector<vector<int>> dist;

void floydWarshall() {
	int n = dist.size();
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<pair<int, pair<int, int>>> v;
	dist.resize(n, vector<int>(n, INF));
	for (int i = 0; i < n; i++) {
		dist[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		v.push_back({c, {a, b}});
	}
	sort(v.begin(), v.end());
	int answer = 0;
	for (auto [c, p] : v) {
		if (dist[p.first][p.second] < c) {
			answer++;
		} else {
			dist[p.first][p.second] = dist[p.second][p.first] = c;
			floydWarshall();
		}
	}
	cout << answer << endl;
	return 0;
}
