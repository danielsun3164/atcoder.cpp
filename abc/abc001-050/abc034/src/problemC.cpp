#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int w, h;
	cin >> w >> h;
	vector<mint> fact(w + h), inv_fact(w + h);
	fact[0] = 1;
	for (int i = 1; i < w + h; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[w + h - 1] = fact[w + h - 1].inv();
	for (int i = w + h - 2; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	cout << (fact[w + h - 2] * inv_fact[w - 1] * inv_fact[h - 1]).val() << endl;
	return 0;
}
