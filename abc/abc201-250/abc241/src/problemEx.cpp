#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	ll m;
	cin >> n >> m;
	vector<mint> a(n), c(n), d(1 << n);
	vector<ll> b(n), p(1 << n);
	d[0] = 1;
	p[0] = 0;
	for (int i = 0; i < n; i++) {
		ll ai;
		cin >> ai >> b[i];
		a[i] = ai;
		b[i]++;
		mint x = -a[i].pow(b[i]);
		for (int j = 0; j < (1 << i); j++) {
			d[(1 << i) + j] = d[j] * x;
			p[(1 << i) + j] = p[j] + b[i];
		}
	}
	for (int i = 0; i < n; i++) {
		mint x = a[i].inv();
		c[i] = 1;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				mint y = a[j] * x;
				c[i] = c[i] * (1 - y);
			}
		}
		c[i] = c[i].inv();
	}
	mint answer = 0;
	for (int i = 0; i < (1 << n); i++) {
		if (p[i] <= m) {
			mint x = 0;
			for (int j = 0; j < n; j++) {
				x += a[j].pow(m - p[i]) * c[j];
			}
			answer += x * d[i];
		}
	}
	cout << answer.val() << endl;
	return 0;
}
