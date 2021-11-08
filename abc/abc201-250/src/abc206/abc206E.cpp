#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int l, r;
	cin >> l >> r;
	vector<ll> count(r + 1, 0LL);
	for (int i = r; i >= 2; i--) {
		ll c = r / i - (l - 1) / i;
		count[i] = c * c;
		for (int j = i + i; j <= r; j += i) {
			count[i] -= count[j];
		}
	}
	ll ans = 0LL;
	for (int i = 2; i <= r; i++) {
		ans += count[i];
		if (i >= l) {
			ans -= 2 * (r / i - (l - 1) / i) - 1;
		}
	}
	cout << ans << endl;
	return 0;
}
