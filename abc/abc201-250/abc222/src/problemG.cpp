#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int pow(ll a, int n, int m) {
	ll ans = 1LL;
	a %= m;
	while (n) {
		if (1 & n) {
			ans = ans * a % m;
		}
		a = a * a % m;
		n >>= 1;
	}
	return int(ans);
}

int phi(int n) {
	int ans = n;
	for (int i = 2; i * i <= n; i++) {
		if (0 == n % i) {
			while (0 == n % i) {
				n /= i;
			}
			ans -= ans / i;
		}
	}
	if (n != 1) {
		ans -= ans / n;
	}
	return ans;
}

set<int> divisor(int n) {
	set<int> div;
	for (int i = 1; i * i <= n; i++) {
		if (0 == n % i) {
			div.insert(i);
			div.insert(n / i);
		}
	}
	return div;
}

int solve(int m) {
	if (0 == (1 & m)) {
		m >>= 1;
	}
	m *= 9;
	for (int d : divisor(phi(m))) {
		if (1 == pow(10, d, m)) {
			return d;
		}
	}
	return -1;
}

int main(void) {
	int t, k;
	cin >> t;
	while (t--) {
		cin >> k;
		cout << solve(k) << endl;
	}
	return 0;
}
