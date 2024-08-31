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

mint binom(int n, int r) {
	return ((n < 0) || (r < 0) || (n < r)) ? 0 : fact[n] * inv_fact[r] * inv_fact[n - r];
}

int main(void) {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	init(n);
	mint answer = 0, ai = 1, bi = 1, ci = 1, sign = (1 & n) ? -1 : 1;
	for (int i = 0; i <= n; i++) {
		answer += binom(n, i) * ai * bi * ci * sign;
		ai += ai - binom(i, a);
		bi += bi - binom(i, b);
		ci += ci - binom(i, c);
		sign = -sign;
	}
	cout << answer.val() << endl;
	return 0;
}
