#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	map<ll, int, greater<int>> mp;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		mp[a]++;
	}
	ll answer = 0L;
	while ((k > 0) && !mp.empty()) {
		auto it = mp.begin();
		pair<ll, int> now = *it, next = { 0LL, 0 };
		if (mp.size() > 1) {
			it++;
			next = *it;
		}
		ll diff = (now.first - next.first) * ll(now.second);
		if (diff <= k) {
			answer += (now.first - next.first) * ll(now.first + next.first + 1) / 2 * now.second;
			k -= diff;
			mp.erase(now.first);
			if (!mp.empty()) {
				mp.begin()->second += now.second;
			}
		} else {
			int end = k / now.second, rem = k % now.second;
			answer += ll(now.first + now.first - end + 1) * ll(end) / 2 * now.second;
			answer += (now.first - end) * ll(rem);
			k = 0;
		}
	}
	cout << answer << endl;
	return 0;
}
