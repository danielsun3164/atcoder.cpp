#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::dsu d(n);
	while (q--) {
		int p, a, b;
		cin >> p >> a >> b;
		if (0 == p) {
			d.merge(a, b);
		} else {
			cout << (d.same(a, b) ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
