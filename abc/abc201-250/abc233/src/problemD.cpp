#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	ll answer = 0LL, sum = 0LL;
	map<ll, ll> mp;
	mp[0LL] = 1;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		sum += a;
		answer += mp[sum - k];
		mp[sum]++;
	}
	cout << answer << endl;
	return 0;
}
