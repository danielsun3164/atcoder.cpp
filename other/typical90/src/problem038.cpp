#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll LARGE = 1E18;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

int main() {
	ll a, b;
	cin >> a >> b;
	b /= gcd(a, b);
	if (a > LARGE / b) {
		cout << "Large" << endl;
	} else {
		cout << (a * b) << endl;
	}
	return 0;
}
