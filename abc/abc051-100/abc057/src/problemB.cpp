#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<ll> a(n), b(n), c(m), d(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> c[i] >> d[i];
	}
	for (int i = 0; i < n; i++) {
		ll dist = INF;
		int result = 0;
		for (int j = 0; j < m; j++) {
			ll x = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			if (x < dist) {
				result = j + 1;
				dist = x;
			}
		}
		cout << result << endl;
	}
	return 0;
}
