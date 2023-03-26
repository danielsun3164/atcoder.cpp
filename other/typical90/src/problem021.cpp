#include <bits/stdc++.h>
#include <atcoder/scc>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;
	atcoder::scc_graph g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g.add_edge(a - 1, b - 1);
	}
	vector<vector<int>> scc = g.scc();
	ll ans = 0LL;
	for (auto v : scc) {
		ans += v.size() * ll(v.size() - 1) / 2;
	}
	cout << ans << endl;
	return 0;
}
