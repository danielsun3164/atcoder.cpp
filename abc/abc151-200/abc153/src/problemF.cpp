#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	ll d, a;
	cin >> n >> d >> a;
	vector<pair<ll, ll>> v(n);
	for (int i = 0; i < n; i++) {
		ll x, h;
		cin >> x >> h;
		v[i] = {x, (h + a - 1) / a};
	}
	sort(v.begin(), v.end());
	vector<ll> s(n + 2, 0LL);
	vector<pair<ll, int>> v2(n);
	int idx = 1;
	for (auto p : v) {
		s[idx] += p.second;
		s[idx + 1] -= p.second;
		v2[idx - 1] = {p.first, idx};
		idx++;
	}
	idx = 1;
	ll ans = 0LL;
	for (auto p : v) {
		s[idx] += s[idx - 1];
		if (s[idx] > 0) {
			ans += s[idx];
			auto itr = upper_bound(v2.begin(), v2.end(), make_pair(p.first + 2 * d, INT_MAX));
			if (itr != v2.end()) {
				s[itr->second] += s[idx];
			}
			s[idx] = 0LL;
		}
		idx++;
	}
	cout << ans << endl;
	return 0;
}
