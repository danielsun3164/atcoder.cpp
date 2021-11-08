#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;

int main() {
	int h, w, n;
	cin >> h >> w >> n;
	int s = h + w + 2 * n, t = s + 1;
	atcoder::mf_graph<int> g(t + 1);
	for (int i = 0; i < h; i++) {
		g.add_edge(s, i, 1);
	}
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		a--;
		b--;
		int u = h + w + i, v = u + n;
		for (int j = a; j < c; j++) {
			g.add_edge(j, u, 1);
		}
		g.add_edge(u, v, 1);
		for (int j = b; j < d; j++) {
			g.add_edge(v, h + j, 1);
		}
	}
	for (int i = 0; i < w; i++) {
		g.add_edge(h + i, t, 1);
	}
	cout << g.flow(s, t) << endl;
	return 0;
}
