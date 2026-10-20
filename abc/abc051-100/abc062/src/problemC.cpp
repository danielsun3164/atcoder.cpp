#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3;
const ll INF = LONG_LONG_MAX >> 1;

ll calc(ll s, ll h, ll w) {
	vector<ll> v{s};
	if ((0 == (h & 1)) || (0 == (w & 1))) {
		v.emplace_back(h * w / 2);
		v.emplace_back(h * w / 2);
	} else {
		ll p = max(h, w), q = min(h, w);
		v.emplace_back((p + 1) * q / 2);
		v.emplace_back((p - 1) * q / 2);
	}
	return *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
}

int main(void) {
	ll h, w;
	cin >> h >> w;
	if ((0 == h % N) || (0 == w % N)) {
		cout << 0 << endl;
		return 0;
	}
	ll answer = INF;
	for (ll i = 1; i <= h - 1; i++) {
		answer = min(answer, calc(i * w, h - i, w));
	}
	for (ll i = 1; i <= w - 1; i++) {
		answer = min(answer, calc(h * i, h, w - i));
	}
	cout << answer << endl;
	return 0;
}
