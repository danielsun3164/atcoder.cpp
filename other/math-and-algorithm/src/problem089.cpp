#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX;

ll pow(ll n, ll m) {
	ll result = 1LL;
	while (m > 0) {
		if (1 & m) {
			if (INF / result < n) {
				return INF;
			}
			result *= n;
		}
		n = (INF / n < n) ? INF : n * n;
		m >>= 1;
	}
	return result;
}

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << ((a < pow(c, b)) ? "Yes" : "No") << endl;
	return 0;
}
