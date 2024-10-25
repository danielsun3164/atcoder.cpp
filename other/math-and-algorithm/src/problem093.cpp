#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll MAX = 1'000'000'000'000'000'000;

ll gcd(ll a, ll b) {
	return (0 == b) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	ll g = a / gcd(a, b);
	return (MAX / g < b) ? MAX + 1 : b * g;
}

int main() {
	ll a, b;
	cin >> a >> b;
	ll lm = lcm(a, b);
	cout << ((lm > MAX) ? "Large" : to_string(lm)) << endl;
	return 0;
}
