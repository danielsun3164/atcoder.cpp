#include <bits/stdc++.h>
#include <atcoder/modint>
#include <atcoder/convolution>
using namespace std;

using mint = atcoder::modint998244353;

int main() {
	int n, m;
	cin >> n >> m;
	vector<mint> a(n), b(m);
	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		a[i] = l;
	}
	for (int i = 0; i < m; i++) {
		int l;
		cin >> l;
		b[i] = l;
	}
	vector<mint> c = atcoder::convolution(a, b);
	for (int i = 0; i < int(c.size()); i++) {
		cout << ((i) ? " " : "");
		cout << c[i].val();
	}
	cout << endl;

	return 0;
}
