#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint perm(int n, int m) {
	return (n >= m) ? fact[n] * inv_fact[n - m] : 0;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	init(n);
	int q = n / m, r = n % m;
	vector<mint> g(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		g[i] = perm(i, q).pow(m - r) * perm(i, q + 1).pow(r) * inv_fact[i];
	}
	vector<mint> h(n + 1);
	for (int i = 0; i <= n; i++) {
		h[i] = (i & 1) ? -inv_fact[i] : inv_fact[i];
	}
	vector<mint> f = convolution(g, h);
	for (int i = 1; i <= n; i++) {
		cout << f[i].val() << endl;
	}
	return 0;
}
