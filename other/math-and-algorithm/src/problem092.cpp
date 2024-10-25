#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX;

int main() {
	ll n, answer = INF;
	cin >> n;
	for (ll i = 1LL; i * i <= n; i++) {
		if (0 == n % i) {
			answer = min(answer, (i + n / i) << 1);
		}
	}
	cout << answer << endl;
	return 0;
}
