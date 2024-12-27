#include <bits/stdc++.h>
using namespace std;

const static int N = 200;

vector<bool> is_prime;

void init() {
	is_prime.resize(N + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= N; i++) {
		if (is_prime[i]) {
			for (int j = i + i; j <= N; j += i) {
				is_prime[j] = false;
			}
		}
	}
}

int main(void) {
	init();
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int count = 1, max_count = 0;
	for (int i = a + c; i <= b + d; i++, count++) {
		if (is_prime[i]) {
			max_count = max(max_count, count);
			count = 0;
		}
	}
	max_count = max(max_count, count);
	cout << ((max_count > d - c + 1) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
