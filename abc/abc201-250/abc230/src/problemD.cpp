#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll d;
	cin >> n >> d;
	map<ll, set<ll>> l_map, r_map;
	for (int i = 0; i < n; i++) {
		ll l, r;
		cin >> l >> r;
		l_map[l].insert(r);
		r_map[r].insert(l);
	}
	int answer = 0;
	while (!r_map.empty()) {
		ll now = r_map.begin()->first, max_l = now + d - 1;
		while (!l_map.empty() && l_map.begin()->first <= max_l) {
			auto iter = l_map.begin();
			for (ll r : iter->second) {
				r_map[r].erase(iter->first);
				if (r_map[r].empty()) {
					r_map.erase(r);
				}
			}
			l_map.erase(iter);
		}
		answer++;
	}
	cout << answer << endl;
	return 0;
}
