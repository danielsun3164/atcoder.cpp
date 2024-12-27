#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	ll m;
	cin >> n >> m;
	vector<ll> d(n);
	for (ll &di : d) {
		cin >> di;
	}
	vector<mint> edges(n + 1);
	edges[1] = 1;
	for (int i = 2; i <= n; i++) {
		edges[i] = -edges[i - 1] * (i - 1);
	}
	vector<mint> comp(1 << n);
	for (int bit = 1; bit < (1 << n); bit++) {
		ll lcm = 1LL;
		for (int i = 0; i < n; i++) {
			if (1 & (bit >> i)) {
				lcm /= gcd(lcm, d[i]);
				if (lcm > m / d[i]) {
					lcm = m + 1;
					break;
				}
				lcm *= d[i];
			}
		}
		comp[bit] = mint(m / lcm) * edges[__builtin_popcount(bit)];
	}
	vector<mint> count(1 << n);
	for (int bit = 1; bit < (1 << n); bit++) {
		int mn = __builtin_ctz(bit);
		count[bit] = comp[bit];
		for (int sub = (bit - 1) & bit; sub > 0; sub = (sub - 1) & bit) {
			if (1 & (sub >> mn)) {
				count[bit] += comp[sub] * count[bit & ~sub];
			}
		}
	}
	cout << count[(1 << n) - 1].val() << endl;
	return 0;
}
