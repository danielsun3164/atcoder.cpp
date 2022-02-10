#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<mint> fact(n + 1), inv_fact(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mint ans = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i <= n - k; i++) {
		ans -= a[i] * fact[n - 1 - i] * inv_fact[k - 1] * inv_fact[n - i - k];
	}
	for (int i = k - 1; i < n; i++) {
		ans += a[i] * fact[i] * inv_fact[k - 1] * inv_fact[i - k + 1];
	}
	cout << ans.val() << endl;
	return 0;
}
