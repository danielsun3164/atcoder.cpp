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
	ll n, x, y;
	cin >> n >> x >> y;
	cout << (n / x + n / y - n / lcm(x, y)) << endl;
	return 0;
}
