#include <bits/stdc++.h>
#include <atcoder/internal_math>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

ll solve(ll n, ll s, ll k) {
	ll g = gcd(n, gcd(s, k));
	if (g > 1LL) {
		n /= g;
		s /= g;
		k /= g;
	}
	pair<ll, ll> p = atcoder::internal::inv_gcd(k, n);
	if (1LL != p.first) {
		return -1LL;
	}
	return atcoder::internal::safe_mod(p.second * (n - s), n);
}

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n, s, k;
		cin >> n >> s >> k;
		cout << solve(n, s, k) << endl;
	}
	return 0;
}
