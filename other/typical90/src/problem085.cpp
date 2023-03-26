#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll k;
	cin >> k;
	int answer = 0;
	for (ll i = 1; i * i * i <= k; i++) {
		if (0LL == k % i) {
			ll ki = k / i;
			for (ll j = i; j * j <= ki; j++) {
				if (0LL == ki % j) {
					answer++;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
