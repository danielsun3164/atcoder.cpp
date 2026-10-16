#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	vector<ll> c(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i] >> c[i];
		a[i]--, b[i]--, c[i] = -c[i];
	}
	vector<ll> dist(n, INF);
	dist[0] = 0;
	for (int _ = 0; _ < n; _++) {
		for (int i = 0; i < m; i++) {
			if ((dist[a[i]] != INF) && (dist[b[i]] > dist[a[i]] + c[i])) {
				dist[b[i]] = dist[a[i]] + c[i];
			}
		}
	}
	ll answer = dist[n - 1];
	vector<bool> negative(n, false);
	for (int _ = 0; _ < n; _++) {
		for (int i = 0; i < m; i++) {
			if (dist[a[i]] != INF) {
				if (dist[b[i]] > dist[a[i]] + c[i]) {
					dist[b[i]] = dist[a[i]] + c[i];
					negative[b[i]] = true;
				}
				if (negative[a[i]]) {
					negative[b[i]] = true;
				}
			}
		}
	}
	cout << ((negative[n - 1]) ? "inf" : to_string(-answer)) << endl;
	return 0;
}
