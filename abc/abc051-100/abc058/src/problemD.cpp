#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<ll> x(n), y(m);
	mint x_sum = 0, y_sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		x_sum += i * x[i] - (n - 1 - i) * x[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> y[i];
		y_sum += i * y[i] - (m - 1 - i) * y[i];
	}
	cout << (x_sum * y_sum).val() << endl;
	return 0;
}
