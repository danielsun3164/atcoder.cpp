#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow_mod(ll n, ll p, ll m) {
	ll res = 1LL;
	n %= m;
	while (p > 0LL) {
		if (1LL & p) {
			res = res * n % m;
		}
		n = n * n % m;
		p >>= 1;
	}
	return res;
}

int main() {
	ll n, m, p;
	cin >> n >> m >> p;
	cout << pow_mod(n, p, m) << endl;
	return 0;
}
