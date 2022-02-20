#include <bits/stdc++.h>
#include <atcoder/math>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

ll gcd(ll a, ll b) {
	return (0L == b) ? a : gcd(b, a % b);
}

// a x ≡ b mod m となるxを計算する
ll get_result(ll a, ll b, ll m) {
	ll d = gcd(a, gcd(b, m));
	if (d > 1) {
		a /= d;
		b /= d;
		m /= d;
	}
	ll g, h;
	tie(g, h) = atcoder::internal::inv_gcd(a, m);
	return (1L == g) ? h * b % m : INF;
}

ll solve(int x, int y, int p, int q) {
	// 2(x+y)n+x <= z < 2(x+y)n+x+y のz MOD (p+q) がpとなるzを計算する
	ll ans = INF;
	for (ll i = x; i < x + y; i++) {
		ll n = get_result(2L * (x + y), atcoder::internal::safe_mod(p - i, p + q), p + q);
		if (INF != n) {
			ans = min(ans, 2L * (x + y) * n + i);
		}
	}
	for (ll j = p; j < p + q; j++) {
		ll m = get_result(p + q, atcoder::internal::safe_mod(x - j, 2L * (x + y)), 2L * (x + y));
		if (INF != m) {
			ans = min(ans, (p + q) * m + j);
		}
	}
	return ans;
}

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x, y, p, q;
		cin >> x >> y >> p >> q;
		ll r = solve(x, y, p, q);
		if (INF == r) {
			cout << "infinity" << endl;
		} else {
			cout << r << endl;
		}
	}
	return 0;
}
