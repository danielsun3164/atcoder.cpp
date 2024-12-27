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
	ll n;
	int k;
	cin >> n >> k;
	vector<int> v(k);
	for (int &vi : v) {
		cin >> vi;
	}
	ll answer = 0L;
	for (int bit = 1; bit < (1 << k); bit++) {
		ll now = 1LL;
		for (int i = 0; i < k; i++) {
			if (1 & (bit >> i)) {
				now = lcm(now, v[i]);
			}
		}
		answer += n / now * ((1 & __builtin_popcount(bit)) ? 1 : -1);
	}
	cout << answer << endl;
	return 0;
}
