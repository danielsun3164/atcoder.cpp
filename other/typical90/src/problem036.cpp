#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main() {
	int n, q;
	cin >> n >> q;
	vector<ll> x(n), y(n);
	ll max_x = -INF, min_x = INF, max_y = -INF, min_y = INF;
	for (int i = 0; i < n; i++) {
		ll xi, yi;
		cin >> xi >> yi;
		x[i] = xi - yi, y[i] = xi + yi;
		max_x = max(max_x, x[i]), min_x = min(min_x, x[i]);
		max_y = max(max_y, y[i]), min_y = min(min_y, y[i]);
	}
	while (q--) {
		int i;
		cin >> i;
		i--;
		ll answer = 0LL;
		answer = max(answer, abs(max_x - x[i]));
		answer = max(answer, abs(min_x - x[i]));
		answer = max(answer, abs(max_y - y[i]));
		answer = max(answer, abs(min_y - y[i]));
		cout << answer << endl;
	}
	return 0;
}
