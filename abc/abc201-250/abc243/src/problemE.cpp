#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_LONG_MAX >> 1;

void warshall_floyd(vector<vector<ll>> &dist) {
	int n = dist.size();
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<ll>> dist(n, vector<ll>(n, INF));
	for (int i = 0; i < n; i++) {
		dist[i][i] = 0;
	}
	vector<int> a(m), b(m);
	vector<ll> c(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i] >> c[i];
		a[i]--, b[i]--;
		dist[a[i]][b[i]] = dist[b[i]][a[i]] = c[i];
	}
	warshall_floyd(dist);
	int answer = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ((a[i] != j) && (b[i] != j) && (dist[a[i]][j] + dist[j][b[i]] <= c[i])) {
				answer++;
				break;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
