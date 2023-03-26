#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> get_primes(int n) {
	vector<bool> is_prime(max(n + 1, 2), true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			for (int j = i + i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
	vector<ll> res;
	for (int i = 0; i <= n; i++) {
		if (is_prime[i]) {
			res.emplace_back(i);
		}
	}
	return res;
}

int main() {
	ll a, b;
	cin >> a >> b;
	int n = (int) (b - a);
	vector<ll> primes = get_primes(n);
	int m = int(primes.size());
	vector<vector<ll>> dp(n + 2, vector<ll>(1 << m, 0LL));
	dp[0][0] = 1L;
	for (int i = 0; i <= n; i++) {
		int bits = 0;
		for (int j = 0; j < m; j++) {
			if (0LL == ((a + i) % primes[j])) {
				bits += 1 << j;
			}
		}
		for (int j = 0; j < (1 << m); j++) {
			dp[i + 1][j] += dp[i][j];
			if (0 == (j & bits)) {
				dp[i + 1][j | bits] += dp[i][j];
			}
		}
	}
	ll ans = 0LL;
	for (int i = 0; i < (1 << m); i++) {
		ans += dp[n + 1][i];
	}
	cout << ans << endl;
	return 0;
}
