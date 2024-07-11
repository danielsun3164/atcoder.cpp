#include <bits/stdc++.h>
#include <atcoder/mincostflow>
using namespace std;
using ll = long long;

const static int N = 5;
const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		vector<ll> a(N + 1), b(N + 1);
		a[0] = b[0] = 0LL;
		ll sa = 0LL, sb = 0LL;
		for (int i = 1; i <= N; i++) {
			cin >> a[i];
			sa += a[i] * i;
		}
		for (int i = 1; i <= N; i++) {
			cin >> b[i];
			sb += b[i] * i;
		}
		if (sa > sb) {
			cout << "No" << endl;
			continue;
		}
		ll count = b[2] + b[3] + b[4] * 2 + b[5] * 2;
		atcoder::mcf_graph<ll, ll> g(8);
		g.add_edge(0, 1, a[3], 0LL);
		g.add_edge(0, 2, a[4], 0LL);
		g.add_edge(0, 3, a[5], 0LL);
		g.add_edge(1, 4, INF, 1LL);
		g.add_edge(1, 5, INF, 2LL);
		g.add_edge(1, 6, INF, 1LL);
		g.add_edge(2, 5, INF, 2LL);
		g.add_edge(2, 6, INF, 2LL);
		g.add_edge(3, 6, INF, 2LL);
		g.add_edge(4, 7, b[3], 0LL);
		g.add_edge(5, 7, b[4], 0LL);
		g.add_edge(6, 7, b[5], 0LL);
		pair<ll, ll> f = g.flow(0, 7);
		if (f.first < a[3] + a[4] + a[5]) {
			cout << "No" << endl;
		} else {
			count -= f.second;
			cout << ((a[2] > count) ? "No" : "Yes") << endl;
		}
	}
	return 0;
}
