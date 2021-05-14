#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n;
	cin >> n;
	int ans = 0;
	for (ll i = 1LL; i * i <= 2 * n; i++) {
		if (0L == (2 * n % i)) {
			if (1LL == (1LL & (i + 2 * n / i))) {
				ans += 2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
