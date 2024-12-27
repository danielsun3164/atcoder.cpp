#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> t(n), a(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> a[i];
	}
	ll x = 1LL, y = 1LL;
	for (int i = 0; i < n; i++) {
		ll m = max((x + t[i] - 1) / t[i], (y + a[i] - 1) / a[i]);
		x = m * t[i];
		y = m * a[i];
	}
	cout << (x + y) << endl;
	return 0;
}
