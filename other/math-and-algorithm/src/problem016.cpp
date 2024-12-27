#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

int main() {
	int n;
	cin >> n;
	ll g;
	cin >> g;
	for (int i = 1; i < n; i++) {
		ll a;
		cin >> a;
		g = gcd(g, a);
	}
	cout << g << endl;
	return 0;
}
