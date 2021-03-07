#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n;
	cin >> n;
	set<ll> s;
	for (ll i = 2; i * i <= n; i++) {
		for (ll j = i * i; j <= n; j *= i) {
			s.insert(j);
		}
	}
	cout << n - s.size() << endl;
	return 0;
}
