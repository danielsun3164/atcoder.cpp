#include <iostream>
#include <atcoder/lazysegtree>

using namespace std;

struct S {
	// # of 0 / # of 1 / inversion number
	long long zero, one, inversion;
};

// swapping flag
using F = bool;
S op(S l, S r) {
	return S { l.zero + r.zero, l.one + r.one, l.inversion + r.inversion + l.one * r.zero, };
}

S e() {
	return S { 0, 0, 0 };
}

S mapping(F l, S r) {
	if (!l)
		return r;
	// swap
	return S { r.one, r.zero, r.one * r.zero - r.inversion };
}

F composition(F l, F r) {
	return (l && !r) || (!l && r);
}

F id() {
	return false;
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<S> a(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = (x) ? S { 0, 1, 0 } : S { 1, 0, 0 };
	}

	// https://atcoder.github.io/ac-library/master/document_ja/lazysegtree.html を参考
	atcoder::lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);

	for (int i = 0; i < q; i++) {
		int t, l, r;
		cin >> t >> l >> r;
		l--;
		if (1 == t) {
			seg.apply(l, r, true);
		} else {
			cout << seg.prod(l, r).inversion << endl;
		}
	}
	return 0;
}
