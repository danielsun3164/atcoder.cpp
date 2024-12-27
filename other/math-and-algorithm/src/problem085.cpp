#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, x, y;
	cin >> n >> x >> y;
	if (x <= 4 * n) {
		for (ll a = 1; a <= n; a++) {
			for (ll b = 1; b <= n; b++) {
				for (ll c = 1; c <= n; c++) {
					ll d = x - a - b - c;
					if ((1 <= d) && (d <= n) && (a * b * c * d == y)) {
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
