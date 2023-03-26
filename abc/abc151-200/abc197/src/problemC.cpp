#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(int n, vector<ll> &a, int bit) {
	ll ans = 0LL, now = 0LL;
	for (int i = 0; i < n; i++) {
		now |= a[i];
		if (bit & (1 << i)) {
			ans ^= now;
			now = 0LL;
		}
	}
	return ans ^ now;
}

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = LONG_MAX;
	for (int i = 0; i < (1 << (n - 1)); i++) {
		ans = min(ans, calc(n, a, i));
	}
	cout << ans << endl;
	return 0;
}
