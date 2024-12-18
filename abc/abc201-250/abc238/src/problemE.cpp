#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, q;
	cin >> n >> q;
	atcoder::dsu d(n + 1);
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		d.merge(l - 1, r);
	}
	cout << (d.same(0, n) ? "Yes" : "No") << endl;
	return 0;
}
