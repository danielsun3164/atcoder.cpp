#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;
using ll = long long;

const static int N = 202;

int main(void) {
	int h, w, c;
	cin >> h >> w >> c;
	vector<vector<ll>> a(h, vector<ll>(w));
	ll answer = 0LL;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			answer += a[i][j];
		}
	}
	int s = h * w, t = s + 1;
	atcoder::mf_graph<ll> graph(t + 1);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int now = i * w + j;
			graph.add_edge(s, now, a[i][j]);
			if ((i > 0) && (j > 0)) {
				int next = (i - 1) * w + j - 1;
				graph.add_edge(now, t, 0LL);
				graph.add_edge(now, next, c);
			} else {
				graph.add_edge(now, t, c);
			}
			if ((i > 0) && (j + 1 < w)) {
				int next = (i - 1) * w + j + 1;
				graph.add_edge(now, t, 0LL);
				graph.add_edge(now, next, c);
			} else {
				graph.add_edge(now, t, c);
			}
		}
	}
	cout << (answer - graph.flow(s, t)) << endl;
	return 0;
}
