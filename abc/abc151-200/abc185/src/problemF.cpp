#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;

int op(int a, int b) {
	return a ^ b;
}

int e() {
	return -1;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//	cerr << "1" << endl;

	atcoder::segtree<int, op, e> seg(a);
	for (int i = 0; i < q; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		x--;
		//		cerr << "2 i=" << i << endl;
		if (1 == t) {
			seg.set(x, seg.get(x) ^ y);
		} else if (2 == t) {
			cout << seg.prod(x, y) << endl;
		}
	}
	return 0;
}
