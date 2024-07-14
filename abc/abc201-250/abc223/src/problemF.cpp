#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;

const static char START = '(';

pair<int, int> op(pair<int, int> a, pair<int, int> b) {
	return make_pair(min(a.first, a.second + b.first), a.second + b.second);
}

pair<int, int> e() {
	return {0, 0};
}

int main(void) {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<pair<int, int>> d(n);
	for (int i = 0; i < n; i++) {
		d[i] = (START == s[i]) ? make_pair(0, 1) : make_pair(-1, -1);
	}
	atcoder::segtree<pair<int, int>, op, e> seg(d);
	while (q--) {
		int t, l, r;
		cin >> t >> l >> r;
		l--;
		r--;
		if (1 == t) {
			pair<int, int> dl = seg.get(l), dr = seg.get(r);
			seg.set(l, dr);
			seg.set(r, dl);
		} else {
			cout << ((make_pair(0, 0) == seg.prod(l, r + 1)) ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
