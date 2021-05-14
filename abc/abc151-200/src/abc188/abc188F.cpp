#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll x;
map<ll, ll> m;

ll solve(ll y) {
	if (x >= y) {
		return x - y;
	}
	if (m.find(y) != m.end()) {
		return m[y];
	}
	ll r = abs(y - x);
	if (1L == (1L & y)) {
		r = min(r, solve((y + 1) >> 1) + 2);
		r = min(r, solve((y - 1) >> 1) + 2);
	} else {
		r = min(r, solve(y >> 1) + 1);
	}
	m[y] = r;
	return r;
}

int main() {
	ll y;
	cin >> x >> y;
	cout << solve(y) << endl;
	return 0;
}
