#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<int> a(n, 0);
	for (int i = 0; i < q; i++) {
		int l, r, t;
		cin >> l >> r >> t;
		fill(a.begin() + l - 1, a.begin() + r, t);
	}
	for (int ai : a) {
		cout << ai << endl;
	}
	return 0;
}
