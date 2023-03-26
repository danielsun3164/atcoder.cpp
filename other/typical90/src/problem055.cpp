#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, p, q;
	cin >> n >> p >> q;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] %= p;
	}
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ll product1 = a[i] * a[j] % p;
			for (int k = j + 1; k < n; k++) {
				ll product2 = product1 * a[k] % p;
				for (int l = k + 1; l < n; l++) {
					ll product3 = product2 * a[l] % p;
					for (int m = l + 1; m < n; m++) {
						ll product4 = product3 * a[m] % p;
						if (product4 == q) {
							answer++;
						}
					}
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
