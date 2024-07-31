#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll x;
	cin >> n >> x;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	ll answer = 0LL;
	for (int i = 1; i < n; i++) {
		ll mx = x - a[i - 1];
		if (mx < 0) {
			answer += a[i] - mx;
			a[i - 1] += mx;
			a[i] = 0;
		} else if (a[i] > mx) {
			answer += a[i] - mx;
			a[i] = mx;
		}
	}
	cout << answer << endl;
	return 0;
}
