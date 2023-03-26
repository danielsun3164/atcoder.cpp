#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<ll> e(n - 1);
	ll sum = 0LL;
	for (int i = 0; i < n - 1; i++) {
		e[i] = a[i + 1] - a[i];
		sum += abs(e[i]);
	}
	while (q--) {
		int l, r;
		ll v;
		cin >> l >> r >> v;
		l -= 2;
		r--;
		if (l >= 0) {
			sum -= abs(e[l]);
			e[l] += v;
			sum += abs(e[l]);
		}
		if (r < n - 1) {
			sum -= abs(e[r]);
			e[r] -= v;
			sum += abs(e[r]);
		}
		cout << sum << endl;
	}
	return 0;
}
