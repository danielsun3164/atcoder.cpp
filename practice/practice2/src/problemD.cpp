#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;

// 障害物
const char OBSTACLE = '#';
const vector<int> XS = {0, 1, 0, -1};
const vector<int> YS = {1, 0, -1, 0};

int main() {
	int n, m;
	cin >> n >> m;
	// https://atcoder.github.io/ac-library/master/document_ja/maxflow.html を参考
	vector<string> grid(n);
	for (int i = 0; i < n; i++) {
		cin >> grid[i];
	}
	atcoder::mf_graph<int> g(n * m + 2);
	int s = n * m, t = n * m + 1;
	// s -> even / odd -> t
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (OBSTACLE != grid[i][j]) {
				int v = i * m + j;
				if (0 == ((i + j) & 1)) {
					g.add_edge(s, v, 1);
				} else {
					g.add_edge(v, t, 1);
				}
			}
		}
	}
	// even -> odd
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((OBSTACLE != grid[i][j]) && (0 == ((i + j) & 1))) {
				for (int k = 0; k < int(XS.size()); k++) {
					int x = i + XS[k], y = j + YS[k];
					if ((x >= 0) && (x < n) && (y >= 0) && (y < m) && (OBSTACLE != grid[x][y])) {
						g.add_edge(i * m + j, x * m + y, 1);
					}
				}
			}
		}
	}
	cout << g.flow(s, t) << endl;
	for (auto edge : g.edges()) {
		if ((s != edge.from) && (t != edge.to) && (0 != edge.flow)) {
			int from_i = edge.from / m, from_j = edge.from % m;
			int to_i = edge.to / m, to_j = edge.to % m;
			if (from_i != to_i) {
				grid[min(from_i, to_i)][from_j] = 'v';
				grid[max(from_i, to_i)][from_j] = '^';
			} else {
				grid[from_i][min(from_j, to_j)] = '>';
				grid[from_i][max(from_j, to_j)] = '<';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << grid[i] << endl;
	}
	return 0;
}
