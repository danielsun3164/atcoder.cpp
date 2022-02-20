#include <bits/stdc++.h>
#include <atcoder/mincostflow>
using namespace std;

int main(void) {
	int n, g, e;
	cin >> n >> g >> e;
	atcoder::mcf_graph<int, int> graph(n + 1);
	for (int i = 0; i < g; i++) {
		int p;
		cin >> p;
		graph.add_edge(p, n, 1, 1);
	}
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		graph.add_edge(a, b, 1, 1);
		graph.add_edge(b, a, 1, 1);
	}
	cout << graph.flow(0, n).first << endl;
	return 0;
}
