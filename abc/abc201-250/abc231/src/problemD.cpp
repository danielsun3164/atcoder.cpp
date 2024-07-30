#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m), c(n);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
		c[a[i]]++;
		c[b[i]]++;
	}
	for (int ci : c) {
		if (ci > 2) {
			cout << "No" << endl;
			return 0;
		}
	}
	atcoder::dsu d(n);
	for (int i = 0; i < m; i++) {
		if (d.same(a[i], b[i])) {
			cout << "No" << endl;
			return 0;
		}
		d.merge(a[i], b[i]);
	}
	cout << "Yes" << endl;
	return 0;
}
