#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static vector<ll> LOWERS = { 999LL, 999'999LL, 999'999'999LL, 999'999'999'999LL, 999'999'999'999'999LL };
static vector<ll> UPPERS = { 999'999LL, 999'999'999LL, 999'999'999'999LL, 999'999'999'999'999LL,
		999'999'999'999'999'999LL };

int main(void) {
	ll n;
	cin >> n;
	ll ans = 0LL;
	for (int i = 0; i < int(LOWERS.size()); i++) {
		if (n < LOWERS[i]) {
			break;
		}
		ans += (min(n, UPPERS[i]) - LOWERS[i]) * (i + 1);
	}
	cout << ans << endl;
	return 0;
}
