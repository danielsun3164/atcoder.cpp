#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<mint> fact(n + 1), inv_fact(n + 1);
	fact[0] = 1;
	for (int i = 0; i < n; i++) {
		fact[i + 1] = fact[i] * (i + 1);
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	mint ans = 0;
	for (int i = 0; i <= min(n - 1, k); i++) {
		ans += fact[n] * inv_fact[n - i] * inv_fact[i] * fact[n - 1] * inv_fact[n - 1 - i] *
			   inv_fact[i];
	}
	cout << ans.val() << endl;
	return 0;
}
