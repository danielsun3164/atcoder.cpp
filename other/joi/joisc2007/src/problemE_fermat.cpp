#include <bits/stdc++.h>
#include <atcoder/math>
using namespace std;
using ll = long long;

int main() {
	ll p, n;
	cin >> p >> n;
	vector<ll> c(p, 0);
	for (int i = 0; i < p; i++) {
		c[atcoder::pow_mod(i, n, p)]++;
	}
	ll ans = 0LL;
	for (int i = 0; i < p; i++) {
		ans += c[i] * c[i] * c[atcoder::internal::safe_mod(i + i, p)];
		for (int j = i + 1; j < p; j++) {
			ans += 2 * c[i] * c[j] * c[atcoder::internal::safe_mod(i + j, p)];
		}
	}
	cout << ans << endl;
	return 0;
}
