#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 10000L;

ll floor(ll n);

ll ceil(ll n) {
	return (n >= 0) ? (n + N - 1) / N * N : -floor(-n);
}

ll floor(ll n) {
	return (n >= 0) ? n / N * N : -ceil(-n);
}

ll sqrt(ll n) {
	ll left = 0L, right = INT_MAX >> 1;
	while (right > left + 1) {
		ll med = (left + right) / 2;
		if (med * med <= n) {
			left = med;
		} else {
			right = med;
		}
	}
	return left;
}

int main(void) {
	double inx, iny, inr;
	cin >> inx >> iny >> inr;
	ll x = round(inx * N), y = round(iny * N), r = round(inr * N), ans = 0L;
	for (ll i = ceil(x - r); i <= x + r; i += N) {
		ll ny = sqrt(r * r - (i - x) * (i - x));
		ans += (floor(y + ny) - ceil(y - ny)) / N + 1L;
	}
	cout << ans << endl;
	return 0;
}
