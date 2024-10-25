#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		mp[r] = max(l, mp[r]);
	}
	int now = 0, now2 = 0, answer = 0;
	decltype(mp)::iterator it = mp.upper_bound(now2);
	while (it != mp.end()) {
		if (it->second >= now) {
			answer++;
			now = it->first;
		}
		now2 = it->first;
		it = mp.upper_bound(now2);
	}
	cout << answer << endl;
	return 0;
}
