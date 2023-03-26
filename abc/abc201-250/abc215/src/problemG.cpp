#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

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
	return (n >= m) ? fact[n] * inv_fact[m] * inv_fact[n - m] : 0;
}

int main(void) {
	int n;
	cin >> n;
	init(n);
	map<int, int> colors, counts;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		colors[c]++;
	}
	for (pair<int, int> color : colors) {
		counts[color.second]++;
	}
	for (int k = 1; k <= n; k++) {
		mint ans = 0, cnk = binom(n, k);
		for (pair<int, int> count : counts) {
			ans += count.second * (cnk - binom(n - count.first, k));
		}
		ans /= cnk;
		cout << ans.val() << endl;
	}
	return 0;
}
