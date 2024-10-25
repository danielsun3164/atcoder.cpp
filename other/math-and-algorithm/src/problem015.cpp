#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

int main() {
	ll a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}
