#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

int main(void) {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	set<pair<ll, ll>> st;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ll dx = x[i] - x[j], dy = y[i] - y[j];
			ll g = gcd(dx, dy);
			st.insert({dx / g, dy / g});
			st.insert({-dx / g, -dy / g});
		}
	}
	cout << st.size() << endl;
	return 0;
}
