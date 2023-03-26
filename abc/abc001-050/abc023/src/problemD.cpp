#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<ll> h, s;

bool check(ll v) {
	vector<ll> t(n);
	for (int i = 0; i < n; i++) {
		if (h[i] > v) {
			return false;
		}
		t[i] = (v - h[i]) / s[i];
	}
	sort(t.begin(), t.end());
	for (int i = 0; i < n; i++) {
		if (t[i] < i) {
			return false;
		}
	}
	return true;
}

int main(void) {
	cin >> n;
	h.resize(n);
	s.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i] >> s[i];
	}
	ll ng = 0, ok = *max_element(h.begin(), h.end()) + *max_element(s.begin(), s.end()) * n;
	while (ok - ng > 1) {
		ll med = (ng + ok) >> 1;
		if (check(med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
