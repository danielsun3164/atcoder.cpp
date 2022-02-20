#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 0; i < n; i++) {
		fact[i + 1] = fact[i] * (i + 1);
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint g(int r, int c) {
	int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
	vector<mint> dp(r + c + 1);
	dp[0] = 1;
	for (int i = 0; i < r + c; i++) {
		dp[i + 1] = dp[i] * 2;
		if (r1 < r) {
			r1++;
		} else {
			dp[i + 1] -= fact[r1 + c1] * inv_fact[r1] * inv_fact[c1];
			c1++;
		}
		if (c2 < c) {
			c2++;
		} else {
			dp[i + 1] -= fact[r2 + c2] * inv_fact[r2] * inv_fact[c2];
			r2++;
		}
	}
	return accumulate(dp.begin(), dp.end(), mint(0));
}

int main() {
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	init(r2 + c2);
	cout << (g(r2, c2) - g(r1 - 1, c2) - g(r2, c1 - 1) + g(r1 - 1, c1 - 1)).val() << endl;
	return 0;
}
