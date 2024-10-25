#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	ll a, b;
	cin >> a >> b;
	int count = 0;
	for (int i = 0; i < n; i++) {
		ll xa = x[i] - a, ya = y[i] - b, xb = x[(i + 1) % n] - a, yb = y[(i + 1) % n] - b;
		if (ya > yb) {
			swap(xa, xb);
			swap(ya, yb);
		}
		if ((ya <= 0) && (0 < yb) && (xa * yb < xb * ya)) {
			count++;
		}
	}
	cout << ((1 & count) ? "INSIDE" : "OUTSIDE") << endl;
	return 0;
}
