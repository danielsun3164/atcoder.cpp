#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<ll> a(n), low(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		low[i] = a[i] - i - 1;
	}
	for (int i = 0; i < q; i++) {
		ll k;
		cin >> k;
		int idx = lower_bound(low.begin(), low.end(), k) - low.begin();
		if (n == idx) {
			cout << (a[n - 1] + (k - low[n - 1])) << endl;
		} else {
			cout << (a[idx] + (k - low[idx] - 1)) << endl;
		}
	}
	return 0;
}
