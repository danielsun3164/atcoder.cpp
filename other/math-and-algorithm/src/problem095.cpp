#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using namespace atcoder;

int main() {
	int n;
	cin >> n;
	vector<fenwick_tree<int>> ft(2, fenwick_tree<int>(n));
	for (int i = 0; i < n; i++) {
		int c, p;
		cin >> c >> p;
		c--;
		ft[c].add(i, p);
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		l--;
		cout << ft[0].sum(l, r) << " " << ft[1].sum(l, r) << endl;
	}
	return 0;
}
