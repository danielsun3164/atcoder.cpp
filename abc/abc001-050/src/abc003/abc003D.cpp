#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;

vector<mint> fact, inv_fact;

mint cn(int n, int m) {
	return fact[n] * inv_fact[m] * inv_fact[n - m];
}

mint p(int x, int y, int d, int l) {
	return ((x > 0) && (y > 0) && (x * y >= (d + l))) ? cn(x * y, d) * cn(x * y - d, l) : 0;
}

mint solve(int x, int y, int d, int l) {
	mint res = p(x, y, d, l);
	res -= p(x - 1, y, d, l) * 2 + p(x, y - 1, d, l) * 2;
	res += p(x - 1, y - 1, d, l) * 4 + p(x - 2, y, d, l) + p(x, y - 2, d, l);
	res -= p(x - 2, y - 1, d, l) * 2 + p(x - 1, y - 2, d, l) * 2;
	res += p(x - 2, y - 2, d, l);
	return res;
}

int main(void) {
	int r, c, x, y, d, l;
	cin >> r >> c >> x >> y >> d >> l;
	int n = max(max(r, c), x * y);
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
	mint ans = (r - x + 1) * (c - y + 1);
	ans *= solve(x, y, d, l);
	cout << ans.val() << endl;
	return 0;
}
