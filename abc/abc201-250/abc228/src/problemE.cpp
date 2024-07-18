#include <bits/stdc++.h>
#include <atcoder/math>
using namespace std;
using namespace atcoder;
using ll = long long;

const static ll MOD = 998'244'353LL;

int main(void) {
	ll n, k, m;
	cin >> n >> k >> m;
	cout << ((0LL == m % MOD) ? 0LL : pow_mod(m, pow_mod(k, n, MOD - 1), MOD)) << endl;
	return 0;
}
