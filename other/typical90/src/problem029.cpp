#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;

int op(int l, int r) {
	return max(l, r);
}

int e() {
	return 0;
}

int mapping(int l, int r) {
	return max(l, r);
}

int composition(int l, int r) {
	return max(l, r);
}

int id() {
	return 0;
}

int main() {
	int w, n;
	cin >> w >> n;
	atcoder::lazy_segtree<int, op, e, int, mapping, composition, id> seg(w);
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		l--;
		int prod = seg.prod(l, r) + 1;
		seg.apply(l, r, prod);
		cout << prod << endl;
	}
	return 0;
}
