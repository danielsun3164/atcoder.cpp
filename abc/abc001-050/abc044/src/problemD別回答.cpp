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
	if (n < s) {
		cout << -1 << endl;
		return 0;
	}
	if (n == s) {
		cout << n + 1 << endl;
		return 0;
	}
	set<ll> st;
	ll m = n - s;
	for (ll d = 1LL; d <= ll(sqrt(m)); d++) {
		if (0LL == m % d) {
			st.insert(d);
			st.insert(m / d);
		}
	}
	for (ll d : st) {
		if (s == f(d + 1, n)) {
			cout << d + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
