#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int q;
	cin >> q;
	deque<pair<ll, ll>> que;
	while (q--) {
		int t;
		ll x, c;
		cin >> t;
		if (1 == t) {
			cin >> x >> c;
			que.push_back({x, c});
		} else {
			ll answer = 0LL;
			cin >> c;
			while (c > 0) {
				auto [nx, nc] = que.front();
				que.pop_front();
				if (c > nc) {
					answer += nx * nc;
					c -= nc;
				} else {
					answer += nx * c;
					nc -= c;
					que.push_front({nx, nc});
					c = 0;
				}
			}
			cout << answer << endl;
		}
	}
	return 0;
}
