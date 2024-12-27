#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;

struct S {
	int size, value;
};

S op(S l, S r) {
	return S{l.size + r.size, l.value + r.value};
}

S e() {
	return S{0, 0};
}

S mapping(int f, S s) {
	return (f >= 0) ? S{s.size, f * s.size} : s;
}

int composition(int l, int r) {
	return (l >= 0) ? l : r;
}

int id() {
	return -1;
}

const static S S_ZERO = S{1, 0};
const static S S_ONE = S{1, 1};

int main(void) {
	int n, q, x;
	cin >> n >> q >> x;
	vector<S> a(n), b(n);
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		a[i] = (p < x) ? S_ZERO : S_ONE;
		b[i] = (p <= x) ? S_ZERO : S_ONE;
	}
	atcoder::lazy_segtree<S, op, e, int, mapping, composition, id> seg_a(a), seg_b(b);
	while (q--) {
		int c, l, r;
		cin >> c >> l >> r;
		l--;
		int s = seg_a.prod(l, r).value, t = seg_b.prod(l, r).value;
		if (1 == c) {
			seg_a.apply(l, r - s, 0);
			seg_a.apply(r - s, r, 1);
			seg_b.apply(l, r - t, 0);
			seg_b.apply(r - t, r, 1);
		} else {
			seg_a.apply(l, l + s, 1);
			seg_a.apply(l + s, r, 0);
			seg_b.apply(l, l + t, 1);
			seg_b.apply(l + t, r, 0);
		}
	}
	for (int i = 0; i < n; i++) {
		if (seg_a.get(i).value != seg_b.get(i).value) {
			cout << (i + 1) << endl;
			break;
		}
	}
	return 0;
}
