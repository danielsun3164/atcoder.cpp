#include <bits/stdc++.h>
using namespace std;

vector<int> calc_primes(int n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	vector<int> result;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			result.emplace_back(i);
			for (int j = i + i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> primes = calc_primes(n);
	for (int i = 0; i < int(primes.size()); i++) {
		cout << (i ? " " : "") << primes[i];
	}
	cout << endl;
	return 0;
}
