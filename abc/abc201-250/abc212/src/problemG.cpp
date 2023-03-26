#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main(void) {
	ll p;
	cin >> p;
	p--;
	set<ll> s;
	for (ll c = 1LL; c * c <= p; c++) {
		if (0 == p % c) {
			s.insert(c);
			s.insert(p / c);
		}
	}
	vector<ll> div(s.begin(), s.end());
	int n = div.size();
	vector<mint> a(n);
	a[0] = 1;
	for (int i = 1; i < n; i++) {
		a[i] = div[i];
		for (int j = 0; j < i; j++) {
			if (0 == div[i] % div[j]) {
				a[i] -= a[j];
			}
		}
	}
	mint ans = 1;
	for (int i = 0; i < n; i++) {
		ans += div[i] * a[i];
	}
	cout << ans.val() << endl;
	return 0;
}
