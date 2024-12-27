#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> calc_is_prime(int n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {
			for (int j = i + i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
	return is_prime;
}

int main() {
	ll n;
	cin >> n;
	int q = int(sqrt(n));
	vector<bool> is_prime = calc_is_prime(q);
	vector<ll> answer;
	for (int i = 2; i <= q; i++) {
		if (is_prime[i]) {
			while (0 == n % i) {
				answer.emplace_back(i);
				n /= i;
			}
		}
	}
	if (n > 1) {
		answer.emplace_back(n);
	}
	for (int i = 0; i < int(answer.size()); i++) {
		cout << (i ? " " : "") << answer[i];
	}
	cout << endl;
	return 0;
}
