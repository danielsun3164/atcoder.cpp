#include <iostream>
#include <atcoder/dsu>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::dsu d(n);
	for (int i = 0; i < q; i++) {
		int t, u, v;
		cin >> t >> u >> v;
		if (0 == t) {
			d.merge(u, v);
		} else {
			cout << (d.same(u, v) ? 1 : 0) << endl;
		}
	}
	return 0;
}
