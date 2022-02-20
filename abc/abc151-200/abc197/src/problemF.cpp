#include <bits/stdc++.h>
using namespace std;

static const int INF = INT_MAX >> 1;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> d(n, vector<int>(n, INF));
	queue<pair<int, int>> bfs;
	for (int i = 0; i < n; i++) {
		d[i][i] = 0;
		bfs.push( { i, i });
	}
	vector<vector<pair<int, int>>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		char c;
		cin >> a >> b >> c;
		a--;
		b--;
		edges[a].emplace_back(make_pair(b, c - 'a'));
		if (a != b) {
			edges[b].emplace_back(make_pair(a, c - 'a'));
			d[a][b] = d[b][a] = 1;
			bfs.push( { a, b });
			bfs.push( { b, a });
		}
	}
	while (!bfs.empty()) {
		pair<int, int> state = bfs.front();
		bfs.pop();
		for (pair<int, int> prev : edges[state.first]) {
			int start = prev.first;
			for (pair<int, int> next : edges[state.second]) {
				int end = next.first;
				if ((INF == d[start][end]) && (prev.second == next.second)) {
					d[start][end] = d[state.first][state.second] + 2;
					bfs.push( { start, end });
				}
			}
		}
	}
	cout << ((INF == d[0][n - 1]) ? -1 : d[0][n - 1]) << endl;
	return 0;
}
