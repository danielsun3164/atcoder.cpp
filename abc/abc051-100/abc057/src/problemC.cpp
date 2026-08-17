#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_LONG_MAX >> 1;

ll f(ll a, ll b) {
	return max(to_string(a).size(), to_string(b).size());
}

int main(void) {
	ll n;
	cin >> n;
	ll answer = INF;
	for (ll i = 1; i * i <= n; i++) {
		if (0 == n % i) {
			answer = min(answer, f(i, n / i));
		}
	}
	cout << answer << endl;
	return 0;
}
