#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;

vector<int> primes;

void calc_primes(int n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			primes.emplace_back(i);
			for (int j = i + i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
}

int main(void) {
	calc_primes(1'000);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> m;
	for (int ai : a) {
		for (int p : primes) {
			if (0 == ai % p) {
				int c = 0;
				while (0 == ai % p) {
					ai /= p;
					c++;
				}
				m[p] = max(m[p], c);
			}
		}
		if (ai > 1) {
			m[ai] = 1;
		}
	}
	mint lcm = 1, ans = 0;
	for (pair<int, int> pi : m) {
		lcm *= mint(pi.first).pow(pi.second);
	}
	for (int ai : a) {
		ans += lcm * mint(ai).inv();
	}
	cout << ans.val() << endl;
	return 0;
}
