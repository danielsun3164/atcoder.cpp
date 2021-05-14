#include <climits>
#include <iostream>
#include <atcoder/mincostflow>
using namespace std;
using ll = long long;

const ll INF = INT_MAX;

int main() {
	int n, k;
	cin >> n >> k;
	// https://atcoder.github.io/ac-library/master/document_ja/mincostflow.html を参考
	/**
	 * generate (s -> row -> column -> t) graph
	 * i-th row correspond to vertex i
	 * i-th col correspond to vertex n + i
	 **/
	atcoder::mcf_graph<int, ll> g(2 * n + 2);
	int s = 2 * n, t = 2 * n + 1;

	g.add_edge(s, t, n * k, INF);

	for (int i = 0; i < n; i++) {
		g.add_edge(s, i, k, 0);
		g.add_edge(n + i, t, k, 0);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			g.add_edge(i, n + j, 1, INF - a);
		}
	}

	auto result = g.flow(s, t, n * k);
	cout << 1LL * n * k * INF - result.second << endl;

	vector<string> grid(n, string(n, '.'));
	for (auto e : g.edges()) {
		if ((s != e.from) && (t != e.to) && (0 != e.flow)) {
			grid[e.from][e.to - n] = 'X';
		}
	}

	for (int i = 0; i < n; i++) {
		cout << grid[i] << endl;
	}
	return 0;
}
