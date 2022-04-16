#include <bits/stdc++.h>
#include <atcoder/convolution>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n + 1, 0), b(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<ll> c = atcoder::convolution_ll(a, b);
	for (int i = 1; i < int(c.size()); i++) {
		cout << c[i] << endl;
	}
	return 0;
}
