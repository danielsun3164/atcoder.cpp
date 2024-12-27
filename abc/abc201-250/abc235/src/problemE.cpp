#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, m, q;
	cin >> n >> m >> q;
	vector<pair<int, tuple<int, int, int>>> vec;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		vec.push_back({c, {a - 1, b - 1, -1}});
	}
	for (int i = 0; i < q; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		vec.push_back({w, {u - 1, v - 1, i}});
	}
	sort(vec.begin(), vec.end());
	atcoder::dsu d(n);
	vector<bool> answers(q);
	for (auto [c, t] : vec) {
		auto [u, v, index] = t;
		if (-1 == index) {
			d.merge(u, v);
		} else {
			answers[index] = !d.same(u, v);
		}
	}
	for (bool ai : answers) {
		cout << (ai ? "Yes" : "No") << endl;
	}
	return 0;
}
