#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;

const char BLACK = 'B';
const char WHITE = 'W';

int main() {
	int n;
	cin >> n;
	vector<string> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((1 & (i + j)) && (c[i][j] != '?')) {
				c[i][j] ^= BLACK ^ WHITE;
			}
		}
	}
	int s = n * n, t = s + 1;
	atcoder::mf_graph<int> g(t + 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			int x = i * n + j;
			g.change_edge(g.add_edge(x, x + 1, 2), 2, 1);
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n; j++) {
			int x = i * n + j;
			g.change_edge(g.add_edge(x, x + n, 2), 2, 1);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = i * n + j;
			if (BLACK == c[i][j]) {
				g.add_edge(s, x, 4);
			}
			if (WHITE == c[i][j]) {
				g.add_edge(x, t, 4);
			}
		}
	}
	cout << 2 * n * (n - 1) - g.flow(s, t) << endl;
	return 0;
}
