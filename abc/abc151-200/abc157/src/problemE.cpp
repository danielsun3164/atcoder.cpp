#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;

int e() {
	return 0;
}

int op(int a, int b) {
	return a | b;
}

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	vector<int> is(n);
	for (int i = 0; i < n; i++) {
		is[i] = 1 << (s[i] - 'a');
	}
	atcoder::segtree<int, op, e> seg(is);
	int q;
	cin >> q;
	while (q--) {
		int t;
		cin >> t;
		if (1 == t) {
			int i;
			char c;
			cin >> i >> c;
			i--;
			if (c != s[i]) {
				s[i] = c;
				seg.set(i, 1 << (c - 'a'));
			}
		} else {
			int l, r;
			cin >> l >> r;
			l--;
			cout << __builtin_popcount(seg.prod(l, r)) << endl;
		}
	}
	return 0;
}
