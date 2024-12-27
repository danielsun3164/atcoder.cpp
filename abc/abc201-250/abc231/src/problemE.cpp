#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(vector<ll> &a, int deg, ll x, map<ll, ll> &mp) {
	if (mp.contains(x)) {
		return mp[x];
	}
	int n = a.size();
	if (n - 1 == deg) {
		return mp[x] = x / a[deg];
	}
	ll current = a[deg], next = a[deg + 1];
	ll r = x % next;
	ll result = r / current + calc(a, deg + 1, x - r, mp);
	if (r) {
		result =
			min(result, calc(a, deg + 1, (x + next - 1) / next * next, mp) + (next - r) / current);
	}
	return mp[x] = result;
}

int main(void) {
	int n;
	ll x;
	cin >> n >> x;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	map<ll, ll> mp;
	cout << calc(a, 0, x, mp) << endl;
	return 0;
}
