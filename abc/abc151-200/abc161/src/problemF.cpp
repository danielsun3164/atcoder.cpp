#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	set<ll> s;
	for (ll i = max(2LL, n - 1); i <= n; i++) {
		s.insert(i);
	}
	for (ll i = 2; i * i <= n; i++) {
		ll t = n;
		while (0 == t % i) {
			t /= i;
		}
		if (1 == t % i) {
			s.insert(i);
		}
		if (0 == (n - 1) % i) {
			s.insert(i);
			s.insert((n - 1) / i);
		}
	}
	cout << s.size() << endl;
	return 0;
}
