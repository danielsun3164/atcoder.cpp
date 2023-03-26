#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll g = gcd(gcd(a, b), c);
	cout << (a / g + b / g + c / g - 3) << endl;
	return 0;
}
