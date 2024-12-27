#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m), c(n);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--, b[i]--;
	}
	for (int &ci : c) {
		cin >> ci;
	}
	atcoder::mf_graph<ll> g(n << 1);
	int s = n, t = n - 1;
	for (int i = 0; i < n; i++) {
		g.add_edge(i, i + n, c[i]);
	}
	for (int i = 0; i < m; i++) {
		g.add_edge(a[i] + n, b[i], INF);
		g.add_edge(b[i] + n, a[i], INF);
	}
	ll answer = g.flow(s, t);
	vector<bool> min_cut = g.min_cut(s);
	vector<int> result;
	for (int i = 0; i < n; i++) {
		if (min_cut[i] && !min_cut[i + n]) {
			result.emplace_back(i + 1);
		}
	}
	cout << answer << endl;
	cout << result.size() << endl;
	for (int i = 0; i < int(result.size()); i++) {
		cout << (i ? " " : "") << result[i];
	}
	cout << endl;
	return 0;
}
