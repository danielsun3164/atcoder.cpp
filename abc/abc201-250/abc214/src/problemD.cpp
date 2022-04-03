#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<pair<ll, pair<int, int>>> edges(n - 1);
	for (int i = 0; i < n - 1; i++) {
		ll u, v;
		cin >> u >> v >> edges[i].first;
		u--;
		v--;
		edges[i].second = { u, v };
	}
	sort(edges.begin(), edges.end());
	ll ans = 0LL;
	atcoder::dsu d(n);
	for (auto p : edges) {
		auto [u, v] = p.second;
		ans += p.first * d.size(u) * d.size(v);
		d.merge(u, v);
	}
	cout << ans << endl;
	return 0;
}
