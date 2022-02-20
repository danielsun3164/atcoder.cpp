#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

mint c(vector<mint> &fact, vector<mint> &inv_fact, int n, int m) {
	if (n < m) {
		return 0;
	}
	return fact[n] * inv_fact[m] * inv_fact[n - m];
}

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	if (n > m + k) {
		cout << 0 << endl;
		return 0;
	}
	vector<mint> fact(n + m + 1), inv_fact(n + m + 1);
	fact[0] = 1;
	for (int i = 1; i <= n + m; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n + m] = fact[n + m].inv();
	for (int i = n + m - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	cout << (c(fact, inv_fact, n + m, m) - c(fact, inv_fact, n + m, m + k + 1)).val() << endl;
	return 0;
}
