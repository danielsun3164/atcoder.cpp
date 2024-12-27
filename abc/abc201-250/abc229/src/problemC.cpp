#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll w;
	cin >> n >> w;
	map<ll, ll> mp;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		mp[a] += b;
	}
	auto iter = mp.rbegin();
	ll answer = 0LL;
	while ((w > 0LL) && (iter != mp.rend())) {
		answer += iter->first * min(iter->second, w);
		w -= min(iter->second, w);
		iter++;
	}
	cout << answer << endl;
	return 0;
}
