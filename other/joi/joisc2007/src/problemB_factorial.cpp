#include <bits/stdc++.h>
using namespace std;

map<int, int> get_prime_factors(int n) {
	map<int, int> m;
	for (int i = 2; i * i <= n; i++) {
		while (0 == n % i) {
			n /= i;
			m[i]++;
		}
	}
	if (n > 1) {
		m[n]++;
	}
	return m;
}

int main() {
	int n;
	cin >> n;
	int ans = 1;
	for (pair<int, int> p : get_prime_factors(n)) {
		int count = p.second, m = 0, t = 0, k = p.first;
		while (count > 0) {
			m += k;
			t = m;
			while (0 == t % k) {
				count--;
				t /= k;
			}
		}
		ans = max(ans, m);
	}
	cout << ans << endl;
	return 0;
}
