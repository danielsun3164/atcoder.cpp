#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<pair<int, pair<int, int>>> g(m);
	for (int i = 0; i < m; i++) {
		int a, b, y;
		cin >> a >> b >> y;
		a--;
		b--;
		g[i] = { y, { a, b } };
	}
	sort(g.rbegin(), g.rend());
	int q;
	cin >> q;
	vector<tuple<int, int, int>> vw;
	for (int i = 0; i < q; i++) {
		int v, w;
		cin >> v >> w;
		v--;
		vw.push_back( { w, v, i });
	}
	sort(vw.rbegin(), vw.rend());
	atcoder::dsu d(n);
	int index = 0;
	vector<int> answers(q);
	for (auto [w, v, i] : vw) {
		while ((index < m) && (g[index].first > w)) {
			auto [ignore, p] = g[index++];
			auto [a, b] = p;
			d.merge(a, b);
		}
		answers[i] = d.size(v);
	}
	for (int ai : answers) {
		cout << ai << endl;
	}
	return 0;
}
