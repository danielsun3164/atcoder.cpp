#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 1'000'000;

vector<bool> is_prime(N + 1, true);

void init() {
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= N; i++) {
		if (is_prime[i]) {
			for (int j = i + i; j <= N; j += i) {
				is_prime[j] = false;
			}
		}
	}
}

int main() {
	init();
	ll l, r;
	cin >> l >> r;
	int answer = 0;
	if (r <= N) {
		for (int i = l; i <= r; i++) {
			if (is_prime[i]) {
				answer++;
			}
		}
	} else {
		vector<bool> is_prime2(r - l + 1, true);
		for (int i = 2; i <= N; i++) {
			if (is_prime[i]) {
				for (ll j = max(2LL, (l + i - 1) / i); j <= r / i; j++) {
					is_prime2[j * i - l] = false;
				}
			}
		}
		for (ll i = l; i <= r; i++) {
			if (is_prime2[i - l]) {
				answer++;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
