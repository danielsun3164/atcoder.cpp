#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<pair<ll, int>> v(m);
	for (int i = 0; i < m; i++) {
		int a;
		ll c;
		cin >> a >> c;
		v[i] = { c, a };
	}
	sort(v.begin(), v.end());
	int x = n;
	ll ans = 0LL;
	for (auto [c, a] : v) {
		int nx = gcd(x, a);
		ans += c * (x - nx);
		x = nx;
	}
	cout << ((1 == x) ? ans : -1LL) << endl;
	return 0;
}
