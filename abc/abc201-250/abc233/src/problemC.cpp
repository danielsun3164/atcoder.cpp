#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll x;
	cin >> n >> x;
	map<ll, int> mp;
	mp[x] = 1;
	for (int i = 0; i < n; i++) {
		map<ll, int> next;
		int l;
		cin >> l;
		for (int j = 0; j < l; j++) {
			ll a;
			cin >> a;
			for (pair<ll, int> p : mp) {
				if (0LL == p.first % a) {
					next[p.first / a] += p.second;
				}
			}
		}
		mp = move(next);
	}
	cout << mp[1LL] << endl;
	return 0;
}
