#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<atcoder::fenwick_tree<int>> v(2, atcoder::fenwick_tree<int>(n));
	for (int i = 0; i < n; i++) {
		int c, p;
		cin >> c >> p;
		v[c - 1].add(i, p);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		cout << v[0].sum(l - 1, r) << " " << v[1].sum(l - 1, r) << endl;
	}
	return 0;
}
