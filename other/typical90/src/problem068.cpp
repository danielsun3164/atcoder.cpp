#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <atcoder/fenwicktree>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::dsu d(n + 1);
	atcoder::fenwick_tree<ll> ft(n);
	while (q--) {
		int t, x, y;
		ll v;
		cin >> t >> x >> y >> v;
		if (0 == t) {
			if (!d.same(x, y)) {
				d.merge(x, y);
				ft.add(x, (1 & x) ? -v : v);
			}
		} else {
			if (d.same(x, y)) {
				int nx = min(x, y), ny = max(x, y);
				ll sum = ft.sum(nx, ny);
				sum = (1 & nx) ? -sum : sum;
				if (1 & (ny - nx)) {
					cout << (sum - v) << endl;
				} else {
					cout << ((nx == x) ? v - sum : v + sum) << endl;
				}
			} else {
				cout << "Ambiguous" << endl;
			}
		}
	}
	return 0;
}
