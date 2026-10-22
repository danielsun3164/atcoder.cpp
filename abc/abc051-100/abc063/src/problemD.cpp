#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll a, b;
vector<ll> h;

bool check(ll t) {
	ll result = 0;
	for (ll &hi : h) {
		result += max(0LL, (hi - b * t + a - b - 1) / (a - b));
	}
	return result <= t;
}

int main(void) {
	cin >> n >> a >> b;
	h.resize(n);
	for (ll &hi : h) {
		cin >> hi;
	}
	ll low = 0, high = (*max_element(h.begin(), h.end()) + b - 1) / b;
	while (high - low > 1) {
		ll med = (low + high) >> 1;
		if (check(med)) {
			high = med;
		} else {
			low = med;
		}
	}
	cout << high << endl;
	return 0;
}
