#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static char LEFT = 'L';
const static char RIGHT = 'R';
const static int MAX = 100'000;

vector<mint> fact, inv_fact;

void init() {
	fact.resize(MAX);
	fact[0] = 1;
	for (int i = 1; i < MAX; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact.resize(MAX);
	inv_fact[MAX - 1] = fact[MAX - 1].inv();
	for (int i = MAX - 2; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint binom(int n, int k) {
	return ((n < 0) || (k < 0) || (n < k)) ? 0 : fact[n] * inv_fact[k] * inv_fact[n - k];
}

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	init();
	vector<vector<mint>> num(n, vector<mint>(n, 0)), cost(n, vector<mint>(n, 0));
	for (int i = 0; i < n; i++) {
		num[i][(i + 1) % n] = 1;
	}
	for (int d = 1; d <= n; d++) {
		for (int l = 0; l < n; l++) {
			int r = (l + d) % n, i = (l + 1) % n;
			while (i != r) {
				int c1 = ((RIGHT == s[l]) ? 1 : 0) + ((LEFT == s[r]) ? 1 : 0),
					c2 = ((RIGHT == s[l]) ? (i - l + n) % n : 0) +
						 ((LEFT == s[r]) ? (r - i + n) % n : 0);
				num[l][r] +=
					num[l][i] * num[i][r] * c1 * binom((r - l - 2 + n) % n, (i - l - 1 + n) % n);
				cost[l][r] += (num[l][i] * num[i][r] * c2 + num[l][i] * cost[i][r] * c1 +
							   cost[l][i] * num[i][r] * c1) *
							  binom((r - l - 2 + n) % n, (i - l - 1 + n) % n);
				i = (i + 1) % n;
			}
		}
	}
	mint answer = 0;
	for (int i = 0; i < n; i++) {
		answer += cost[i][i];
	}
	answer *= inv_fact[n];
	cout << answer.val() << endl;
	return 0;
}
