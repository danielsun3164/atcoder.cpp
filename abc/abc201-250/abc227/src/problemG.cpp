#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

vector<bool> calc_primes(int n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int p = 2; p <= n; p++) {
		if (is_prime[p]) {
			for (int j = p + p; j <= n; j += p) {
				is_prime[j] = false;
			}
		}
	}
	return is_prime;
}

int main(void) {
	ll n;
	int k;
	cin >> n >> k;
	// 分子、分母
	vector<ll> nume(k), deno(k);
	ll offset = n - k + 1;
	iota(nume.begin(), nume.end(), offset);
	iota(deno.begin(), deno.end(), 1LL);
	int m = max(int(sqrt(n)), k);
	vector<bool> is_prime = calc_primes(m);
	mint answer = 1;
	for (int p = 2; p <= m; p++) {
		if (is_prime[p]) {
			int pow = 0;
			for (int i = p - 1; i < k; i += p) {
				while (0 == deno[i] % p) {
					deno[i] /= p;
					pow--;
				}
			}
			for (ll i = (offset + p - 1) / p * p; i <= n; i += p) {
				while (0 == nume[i - offset] % p) {
					nume[i - offset] /= p;
					pow++;
				}
			}
			answer *= pow + 1;
		}
	}
	for (ll vi : nume) {
		if (vi > 1) {
			answer *= 2;
		}
	}
	cout << answer.val() << endl;
	return 0;
}
