#include <bits/stdc++.h>
#include <atcoder/mincostflow>
#include <atcoder/scc>
using namespace std;
using ll = long long;

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(m), b(m);
	atcoder::scc_graph graph(n);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
		graph.add_edge(a[i], b[i]);
	}
	vector<vector<int>> scc = graph.scc();
	int p = scc.size();
	vector<int> belongs(n);
	for (int i = 0; i < p; i++) {
		for (int u : scc[i]) {
			belongs[u] = i;
		}
	}
	vector<ll> x(p, 0LL);
	for (int i = 0; i < n; i++) {
		int xi;
		cin >> xi;
		x[belongs[i]] += xi;
	}
	vector<ll> accum(p + 1, 0LL);
	for (int i = 0; i < p; i++) {
		accum[i + 1] = accum[i] + x[i];
	}
	atcoder::mcf_graph<int, ll> network(2 * p + 1);
	for (int i = 0; i < p; i++) {
		network.add_edge(2 * i, 2 * i + 1, 1, 0);
		network.add_edge(2 * i, 2 * i + 1, k, x[i]);
		network.add_edge(2 * i + 1, 2 * p, k, accum[p] - accum[i + 1]);
	}
	for (int i = 0; i < m; i++) {
		int u = belongs[a[i]], v = belongs[b[i]];
		if (u != v) {
			network.add_edge(2 * u + 1, 2 * v, k, accum[v] - accum[u + 1]);
		}
	}
	int s = belongs[0];
	cout << ((accum[p] - accum[s]) * k - network.flow(2 * s, 2 * p, k).second) << endl;
	return 0;
}
