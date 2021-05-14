#include <iostream>
#include <atcoder/lazysegtree>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

struct S {
	mint a;
	int size;
};

struct F {
	mint a, b;
};

S op(S l, S r) {
	return S { l.a + r.a, l.size + r.size };
}

S e() {
	return S { 0, 0 };
}

S mapping(F f, S s) {
	return S { s.a * f.a + s.size * f.b, s.size };
}

F composition(F l, F r) {
	return F { r.a * l.a, r.b * l.a + l.b };
}

F id() {
	return F { 1, 0 };
}

int main() {
	int n, q;
	cin >> n >> q;
	vector<S> a(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = S { x, 1 };
	}

	// https://atcoder.github.io/ac-library/master/document_ja/lazysegtree.html を参考
	atcoder::lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);

	for (int i = 0; i < q; i++) {
		int t, l, r;
		cin >> t >> l >> r;
		if (0 == t) {
			int c, d;
			cin >> c >> d;
			seg.apply(l, r, F { c, d });
		} else {
			cout << seg.prod(l, r).a.val() << endl;
		}
	}
	return 0;
}
