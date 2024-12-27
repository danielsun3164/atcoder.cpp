#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

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

mint combination(int n, int r) {
	return fact[n] * inv_fact[r] * inv_fact[n - r];
}

int main() {
	int x, y;
	cin >> x >> y;
	init(x + y);
	cout << combination(x + y, x).val() << endl;
	return 0;
}
