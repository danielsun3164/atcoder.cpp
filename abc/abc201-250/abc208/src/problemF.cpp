#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

int main() {
	ll n;
	int m, k;
	cin >> n >> m >> k;
	int s = m + k;
	vector<mint> dp(s + 1);
	for (int i = 0; i <= s; i++) {
		dp[i] = mint(i).pow(k);
	}
	for (int j = 0; j < m; j++) {
		for (int i = 1; i <= s; i++) {
			dp[i] += dp[i - 1];
		}
	}
	mint fact = 1;
	for (int i = 1; i <= s; i++) {
		fact *= i;
	}
	vector<mint> inv_fact(s + 1);
	inv_fact[s] = fact.inv();
	for (int i = s - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
	vector<mint> l(s + 1), r(s + 1);
	l[0] = r[s] = 1;
	n %= fact.mod();
	for (int i = 0; i < s; i++) {
		l[i + 1] = l[i] * (n - i);
	}
	for (int i = s; i >= 1; i--) {
		r[i - 1] = r[i] * (n - i);
	}
	mint ans = 0;
	for (int i = 0; i <= s; i++) {
		ans += (((1 & s) == (1 & i)) ? 1 : -1) * dp[i] * l[i] * r[i] * inv_fact[i] * inv_fact[s - i];
	}
	cout << ans.val() << endl;
	return 0;
}
