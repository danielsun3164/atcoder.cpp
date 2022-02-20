#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<pair<ll, ll>> v;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		v.emplace_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	for (auto p : v) {
		if (k < p.first) {
			break;
		}
		k += p.second;
	}
	cout << k << endl;
	return 0;
}
