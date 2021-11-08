#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;

int op(int a, int b) {
	return max(a, b);
}

int e() {
	return -1;
}

int target;

bool f(int v) {
	return v < target;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// https://atcoder.github.io/ac-library/master/document_ja/segtree.html を参考
	atcoder::segtree<int, op, e> seg(a);
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (1 == t) {
			int x, v;
			cin >> x >> v;
			x--;
			seg.set(x, v);
		} else if (2 == t) {
			int l, r;
			cin >> l >> r;
			l--;
			cout << seg.prod(l, r) << endl;
		} else {
			int x;
			cin >> x >> target;
			x--;
			cout << seg.max_right<f>(x) + 1 << endl;
		}
	}
	return 0;
}
