#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

vector<int> calc_primes(int n) {
	vector<bool> is_primes(n + 1, true);
	is_primes[0] = is_primes[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_primes[i]) {
			for (int j = i + i; j <= n; j += i) {
				is_primes[j] = false;
			}
		}
	}
	vector<int> result;
	for (int i = 0; i <= n; i++) {
		if (is_primes[i]) {
			result.emplace_back(i);
		}
	}
	return result;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> primes = calc_primes(n);
	map<int, int> mp;
	for (int i = 2; i <= n; i++) {
		int t = i;
		for (int p : primes) {
			while (0 == t % p) {
				t /= p;
				mp[p]++;
			}
		}
	}
	mint answer = 1;
	for (auto [_, c] : mp) {
		answer *= c + 1;
	}
	cout << answer.val() << endl;
	return 0;
}
