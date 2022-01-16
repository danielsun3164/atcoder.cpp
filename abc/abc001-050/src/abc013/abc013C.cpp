#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LLONG_MAX >> 1;

ll calc(int n, ll a, ll b, ll c, ll d, ll target) {
	if (d * n > target) {
		return n * c;
	} else if (b * n <= target) {
		return INF;
	}
	ll an = (target - d * n) / (b - d) + 1;
	return an * a + (n - an) * c;
}

int main(void) {
	int n;
	ll h, a, b, c, d, e;
	cin >> n >> h >> a >> b >> c >> d >> e;
	ll ans = INF;
	for (int i = 0; i <= n; i++) {
		ans = min(ans, calc(n - i, a, b, c, d, i * e - h));
	}
	cout << ans << endl;
	return 0;
}
