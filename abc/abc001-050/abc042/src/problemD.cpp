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

mint comb(int n, int k) {
	return fact[n] * inv_fact[k] * inv_fact[n - k];
}

int main(void) {
	int h, w, a, b;
	cin >> h >> w >> a >> b;
	init(h + w);
	mint answer = 0;
	for (int i = b + 1; i <= w; i++) {
		answer += comb(h - a + i - 2, i - 1) * comb(a + w - i - 1, a - 1);
	}
	cout << answer.val() << endl;
	return 0;
}
