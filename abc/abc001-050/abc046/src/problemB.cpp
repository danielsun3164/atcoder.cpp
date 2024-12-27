#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow(ll n, ll m) {
	ll result = 1L;
	while (m > 0) {
		if (1 & m) {
			result *= n;
		}
		m >>= 1;
		n *= n;
	}
	return result;
}

int main(void) {
	ll n, k;
	cin >> n >> k;
	cout << (k * pow(k - 1, n - 1)) << endl;
	return 0;
}
