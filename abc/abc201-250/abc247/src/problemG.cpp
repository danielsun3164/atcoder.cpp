#include <bits/stdc++.h>
#include <atcoder/mincostflow>
using namespace std;
using ll = long long;

const int M = 150;
const ll INF = LONG_LONG_MAX / 2 / M;

int main(void) {
	int n;
	cin >> n;
	atcoder::mcf_graph<ll, ll> graph(2 * M + 2);
	int s = M * 2, t = s + 1;
	for (int i = 0; i < M; i++) {
		graph.add_edge(s, i, 1, 0);
		graph.add_edge(i + M, t, 1, 0);
	}
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		graph.add_edge(a, b + M, 1, INF - c);
	}
	vector<pair<ll, ll>> f = graph.slope(s, t, M);
	vector<ll> answer(f.back().first + 1);
	ll x = 0, y = 0;
	for (int i = 1; i < int(f.size()); i++) {
		auto [nx, ny] = f[i];
		ll d = (ny - y) / (nx - x);
		while (x != nx) {
			x++, y += d;
			answer[x] = INF * x - y;
		}
	}
	cout << answer.size() - 1 << endl;
	for (int i = 1; i < int(answer.size()); i++) {
		cout << answer[i] << endl;
	}
	return 0;
}
