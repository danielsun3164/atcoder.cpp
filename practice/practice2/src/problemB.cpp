#include <iostream>
#include <atcoder/fenwicktree>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::fenwick_tree<ll> fw(n);
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		fw.add(i, a);
	}
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (0 == t) {
			int p, x;
			cin >> p >> x;
			fw.add(p, x);
		} else {
			int l, r;
			cin >> l >> r;
			cout << fw.sum(l, r) << endl;
		}
	}
	return 0;
}
