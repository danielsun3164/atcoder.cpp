#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;
using ll = long long;
using pli = pair<ll, int>;

const int N = 2'000'001;

vector<bool> is_prime(N, true);
vector<int> primes;

void init() {
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < N; i++) {
		if (is_prime[i]) {
			primes.emplace_back(i);
			for (int j = i + i; j < N; j += i) {
				is_prime[j] = false;
			}
		}
	}
}

vector<pli> fact(ll n) {
	vector<pli> v;
	for (int p : primes) {
		if (p * p > n) {
			break;
		}
		int count = 0;
		while (0 == n % p) {
			n /= p;
			count++;
		}
		if (count) {
			v.push_back({p, count});
		}
	}
	if (1 != n) {
		v.push_back({n, 1});
	}
	return v;
}

mint comb(ll n, ll k) {
	if ((k < 0) || (n < k)) {
		return 0;
	}
	k = min(k, n - k);
	mint result = 1;
	for (int i = 1; i <= k; i++) {
		result = result * (n + 1 - i) / i;
	}
	return result;
}

mint calc(ll n, pli &x, ll k) {
	ll p = x.first, q = 1;
	int s = x.second;
	for (int i = 0; i < s; i++) {
		q *= p;
	}
	n %= q;
	mint d = mint(p).pow(s) - mint(p).pow(s - 1);
	if (0 == n) {
		vector<mint> a(s + 1);
		for (int i = 0; i <= s; i++) {
			a[i] = mint(p).pow(s - i);
		}
		for (int i = 0; i < s; i++) {
			a[i] -= a[i + 1];
		}
		vector<mint> b(s);
		for (int i = 0; i < s; i++) {
			b[i] = d.pow(k - 1) * comb(i + k - 1, k - 1);
		}
		mint result = mint(x.first).pow(s).pow(k);
		for (int i = 0; i < s; i++) {
			result -= a[i] * b[i];
		}
		return result;
	} else {
		int count = 0;
		while (0 == n % p) {
			count++;
			n /= p;
		}
		return d.pow(k - 1) * comb(count + k - 1, k - 1);
	}
}

int main(void) {
	init();
	ll k, n, m;
	cin >> k >> n >> m;
	vector<pli> f = fact(m);
	mint answer = 1;
	for (pli x : f) {
		answer *= calc(n, x, k);
	}
	cout << answer.val() << endl;
	return 0;
}
