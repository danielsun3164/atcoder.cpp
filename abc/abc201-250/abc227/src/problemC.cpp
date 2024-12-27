#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n, answer = 0LL;
	cin >> n;
	for (ll a = 1LL; a * a * a <= n; a++) {
		ll bc = n / a;
		for (ll b = a; a * b * b <= n; b++) {
			answer += bc / b - b + 1;
		}
	}
	cout << answer << endl;
	return 0;
}
