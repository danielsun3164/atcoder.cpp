#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int q;
	cin >> q;
	multiset<ll> s;
	ll d = 0LL;
	while (q--) {
		int p;
		ll x;
		cin >> p;
		if (1 == p) {
			cin >> x;
			s.insert(x - d);
		} else if (2 == p) {
			cin >> x;
			d += x;
		} else {
			cout << *s.begin() + d << endl;
			s.erase(s.begin());
		}
	}
	return 0;
}
