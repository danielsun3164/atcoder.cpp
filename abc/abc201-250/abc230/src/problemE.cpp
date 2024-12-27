#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n;
	cin >> n;
	ll q = ll(sqrt(n));
	ll answer = 0L;
	for (ll i = 1; i <= q; i++) {
		answer += i * (n / i - n / (i + 1));
	}
	for (ll i = 1; i <= n / (q + 1); i++) {
		answer += n / i;
	}
	cout << answer << endl;
	return 0;
}
