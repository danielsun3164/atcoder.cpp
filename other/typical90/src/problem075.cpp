#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 1'000'000;

vector<int> get_primes() {
	vector<bool> prime(N, true);
	prime[0] = prime[1] = false;
	vector<int> result;
	for (int i = 2; i < N; i++) {
		if (prime[i]) {
			result.emplace_back(i);
			for (int j = i + i; j < N; j += i) {
				prime[j] = false;
			}
		}
	}
	return result;
}

int main() {
	ll n;
	cin >> n;
	vector<int> primes = get_primes();
	int count = 0, answer = 0;
	for (int p : primes) {
		if (n < p) {
			break;
		}
		if (0 == n % p) {
			while (0 == n % p) {
				n /= p;
				count++;
			}
		}
	}
	if (n > 1) {
		count++;
	}
	while ((1 << answer) < count) {
		answer++;
	}
	cout << answer << endl;
	return 0;
}
