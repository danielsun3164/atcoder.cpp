#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, m;
	cin >> n >> m;
	int p = 1 << n;
	vector<int> edges(p);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[(1 << a) | (1 << b)] = 1;
	}
	for (int i = 1; i < p; i <<= 1) {
		for (int j = 0; j < p; j++) {
			if (0 == (j & i)) {
				edges[j | i] += edges[j];
			}
		}
	}
	vector<mint> g(p), f(p);
	for (int i = 0; i < p; i++) {
		g[i] = mint(2).pow(edges[i]);
	}
	for (int i = 1; i < p; i++) {
		int ct = __builtin_ctz(i);
		f[i] = g[i];
		for (int j = i - 1; j >= 0; j--) {
			j &= i;
			if (1 & (j >> ct)) {
				f[i] -= f[j] * g[i ^ j];
			}
		}
	}
	int full = p - 1;
	for (int node = 1; node < n; node++) {
		int mask = (1 << node) | 1;
		mint ans = 0;
		for (int i = 0; i < p; i++) {
			if (mask == (i & mask)) {
				ans += f[i] * g[full ^ i];
			}
		}
		cout << ans.val() << endl;
	}
	return 0;
}
