#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static vector<ll> KEYS = { 11LL, 101LL, 1'001LL, 1'0001LL, 1'00001LL, 1'000001LL };
static vector<ll> LOWERS = { 11LL, 10'10LL, 100'100LL, 1000'1000LL, 10000'10000LL, 100000'100000LL };
static vector<ll> UPPERS = { 99LL, 99'99LL, 999'999LL, 9999'9999LL, 99999'99999LL, 999999'999999LL };

int main(void) {
	ll n;
	cin >> n;
	ll ans = 0LL;
	for (int i = 0; i < int(KEYS.size()); i++) {
		if (n < LOWERS[i]) {
			break;
		}
		ans += (min(n, UPPERS[i]) - LOWERS[i]) / KEYS[i] + 1;
	}
	cout << ans << endl;
	return 0;
}
