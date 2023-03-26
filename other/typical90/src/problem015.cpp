#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

mint ncr(vector<mint> &fact, vector<mint> &inv_fact, int n, int r) {
	return fact[n] * inv_fact[r] * inv_fact[n - r];
}

int main() {
	int n;
	cin >> n;
	vector<mint> fact(n + 1), inv_fact(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	for (int k = 1; k <= n; k++) {
		mint ans = 0;
		for (int a = 1; a <= (n + k - 1) / k; a++) {
			ans += ncr(fact, inv_fact, n - (k - 1) * (a - 1), a);
		}
		cout << ans.val() << endl;
	}
	return 0;
}
