#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(void) {
	ll n, k, x, m = 0, sum = 0;
	cin >> n >> k >> x;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
		sum += ai;
		m += ai / x;
		ai %= x;
	}
	sum -= x * min(k, m);
	k -= min(k, m);
	sort(a.begin(), a.end(), greater<ll>());
	for (ll i = 0; i < min(k, n); i++) {
		sum -= a[i];
	}
	cout << sum << endl;
	return 0;
}
