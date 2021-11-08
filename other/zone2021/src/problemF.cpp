#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<bool> ok(n, true);
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		ok[a] = false;
	}
	vector<int> base, elim;
	for (int x = 0; x < n; x++) {
		if (ok[x]) {
			int y = x;
			for (int b : elim) {
				y = min(y, y ^ b);
			}
			if (y) {
				base.emplace_back(x);
				elim.emplace_back(y);
			}
		}
	}
	if ((1 << base.size()) < n) {
		cout << -1 << endl;
		return 0;
	}
	atcoder::dsu u(n);
	for (int x : base) {
		for (int i = 0; i < n; i++) {
			if (!u.same(i, i ^ x)) {
				u.merge(i, i ^ x);
				cout << i << ' ' << (i ^ x) << endl;
			}
		}
	}
	return 0;
}
