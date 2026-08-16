#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact.resize(n + 1);
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint combination(int n, int k) {
	return ((k < 0) || (k > n)) ? 0 : fact[n] * inv_fact[n - k] * inv_fact[k];
}

mint f1(int n, int x) {
	x = abs(x);
	return ((n >= x) && ((1 & x) == (1 & n))) ? combination(n, (n + x) >> 1) : 0;
}

int main(void) {
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	x = abs(x), y = abs(y), z = abs(z);
	init(n);
	mint answer = 0;
	for (int k = z; k <= n; k++) {
		answer += combination(n, k) * f1(k, z) * f1(n - k, x + y) * f1(n - k, x - y);
	}
	cout << answer.val() << endl;
	return 0;
}
