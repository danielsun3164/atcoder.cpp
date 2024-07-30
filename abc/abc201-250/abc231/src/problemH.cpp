#include <bits/stdc++.h>
#include <atcoder/mincostflow>
using namespace std;
using ll = long long;

const static int INF = INT_MAX >> 1;

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	vector<int> hmin(h, INF), wmin(w, INF);
	vector<tuple<int, int, int>> vt;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		hmin[a] = min(hmin[a], c);
		wmin[b] = min(wmin[b], c);
		vt.emplace_back(make_tuple(a, b, c));
	}
	int s = 0, t = h + w + 1;
	atcoder::mcf_graph<ll, ll> g(t + 1);
	for (int i = 1; i <= h; i++) {
		g.add_edge(s, i, 1LL, 0LL);
	}
	for (int i = 1; i <= w; i++) {
		g.add_edge(h + i, t, 1LL, 0LL);
	}
	for (auto [a, b, c] : vt) {
		if (c < hmin[a] + wmin[b]) {
			g.add_edge(a + 1, b + h + 1, 1LL, c - hmin[a] - wmin[b] + INF);
		}
	}
	g.add_edge(s, t, min(h, w), INF);

	ll ans_base =
		accumulate(hmin.begin(), hmin.end(), 0LL) + accumulate(wmin.begin(), wmin.end(), 0LL);
	auto [cap, cost] = g.flow(s, t, min(h, w));
	cout << ans_base + cost - INF * cap << endl;
	return 0;
}
