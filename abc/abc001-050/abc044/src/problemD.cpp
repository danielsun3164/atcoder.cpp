#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

ll f(ll b, ll n) {
	if (0LL == n) {
		return 0LL;
	}
	return f(b, n / b) + n % b;
}

int main(void) {
	ll n, s;
	cin >> n >> s;
	if (n == s) {
		cout << n + 1 << endl;
		return 0;
	}
	ll answer = INF;
	for (ll b = 2; b <= ll(sqrt(n)); b++) {
		if (s == f(b, n)) {
			answer = min(answer, b);
		}
	}
	for (ll p = 1LL; p <= ll(sqrt(n)); p++) {
		if (0LL == (n - s) % p) {
			ll b = (n - s) / p + 1;
			if ((b >= 2) && (s == f(b, n))) {
				answer = min(answer, b);
			}
		}
	}
	cout << ((INF == answer) ? -1 : answer) << endl;
	return 0;
}
