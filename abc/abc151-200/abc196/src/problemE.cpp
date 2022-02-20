#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static const ll INF = LONG_MAX >> 1;

int main(void) {
	int n;
	cin >> n;
	ll low = -INF, high = INF, add = 0LL;
	for (int i = 0; i < n; i++) {
		ll a, t;
		cin >> a >> t;
		if (1 == t) {
			low += a;
			high += a;
			add += a;
		} else if (2 == t) {
			low = max(low, a);
			high = max(high, a);
		} else {
			low = min(low, a);
			high = min(high, a);
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		ll x;
		cin >> x;
		cout << clamp(x + add, low, high) << endl;
	}
	return 0;
}
