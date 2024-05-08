#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 202;

int main(void) {
	ll n, s, t, a, b;
	cin >> n >> s >> t >> a >> b;
	double answer = 1e20, m = sqrt(2.0 * n * b / a);
	for (int i = 0; i < N; i++) {
		ll x = m + i;
		x = max(x, 1LL);
		x = min(x, t);
		if (s <= t) {
			x = min(x, t - s);
		}
		answer = min(answer, a * (x - 1) / 2.0 + (double) b * n / x);
	}

	if (s <= t) {
		answer = min(answer, (double) (t - s) * a);
	}
	cout << setprecision(20) << answer << endl;
	return 0;
}
