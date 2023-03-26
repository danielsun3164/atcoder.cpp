#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool calc(ll now, ll n, int depth, bool takahashi) {
	ll next = (((1 & depth) && takahashi) || ((0 == (1 & depth)) && !takahashi)) ? now << 1 | 1 : now << 1;
	return (next > n) ? !takahashi : calc(next, n, depth, !takahashi);
}

int main(void) {
	ll n;
	cin >> n;
	int depth = 0;
	ll t = n;
	while (t > 0) {
		depth++;
		t >>= 1;
	}
	cout << (calc(1LL, n, depth, true) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
