#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow(ll n, ll m) {
	ll res = 1LL;
	while (m) {
		if (1 & m) {
			res *= n;
		}
		n *= n;
		m >>= 1;
	}
	return res;
}

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << ((a < pow(c, b) ? "Yes" : "No")) << endl;
	return 0;
}
