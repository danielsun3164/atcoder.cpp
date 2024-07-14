#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint binom(int n, int m) {
	return fact[n] * inv_fact[m] * inv_fact[n - m];
}

int main(void) {
	int n;
	cin >> n;
	init(n << 1);
	vector<int> p(n), q(n), inv_p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		p[i]--;
		inv_p[p[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		q[i]--;
	}
	vector<bool> done(n, false);
	vector<mint> coeff(1, 1);
	for (int src = 0; src < n; src++) {
		if (!done[src]) {
			int cnt = 0;
			for (int u = src; !done[u]; u = inv_p[q[u]]) {
				done[u] = true;
				cnt++;
			}
			if (1 == cnt) {
				vector<mint> next(coeff.size() + 1);
				for (int i = 0; i < int(coeff.size()); i++) {
					next[i] += coeff[i];
					next[i + 1] += coeff[i];
				}
				coeff = move(next);
			} else {
				vector<mint> dp(cnt + 1, 0);
				dp[cnt] = 2;
				for (int first = 0; first < cnt; first++) {
					for (int other = 0; other < cnt - first; other++) {
						dp[cnt - other - 1] += binom(cnt - first + other, 2 * other + 1) +
											   binom(cnt - first + other - 1, 2 * other) * first;
					}
				}
				vector<mint> next(coeff.size() + dp.size() - 1);
				for (int i = 0; i < (int)coeff.size(); ++i) {
					for (int j = 0; j < (int)dp.size(); ++j) {
						next[i + j] += coeff[i] * dp[j];
					}
				}
				coeff = move(next);
			}
		}
	}
	mint ans;
	for (int i = 0; i <= n; i++) {
		mint add = fact[n - i] * coeff[i];
		ans += (1 & i) ? -add : add;
	}
	cout << ans.val() << endl;
	return 0;
}
