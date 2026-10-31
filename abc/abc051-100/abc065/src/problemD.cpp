#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> va(n), vb(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		va[i] = {x, i}, vb[i] = {y, i};
	}
	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());
	vector<tuple<int, int, int>> edges;
	for (int i = 0; i < n - 1; i++) {
		edges.push_back({va[i + 1].first - va[i].first, va[i].second, va[i + 1].second});
		edges.push_back({vb[i + 1].first - vb[i].first, vb[i].second, vb[i + 1].second});
	}
	sort(edges.begin(), edges.end());
	dsu uf(n);
	ll answer = 0;
	for (auto [c, x, y] : edges) {
		if (!uf.same(x, y)) {
			uf.merge(x, y);
			answer += c;
		}
	}
	cout << answer << endl;
	return 0;
}
