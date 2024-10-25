#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

int main() {
	int n;
	cin >> n;
	ll l = 1LL;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		l = lcm(l, a);
	}
	cout << l << endl;
	return 0;
}
