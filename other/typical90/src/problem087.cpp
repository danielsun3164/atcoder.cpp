#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int count(int n, int p, vector<vector<ll>> &a, ll x) {
	vector<vector<ll>> d(n, vector<ll>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = (-1 == a[i][j]) ? x : a[i][j];
		}
	}
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i][j] <= p) {
				result++;
			}
		}
	}
	return result;
}

ll binary_search(int n, int p, int k, vector<vector<ll>> &a, ll l, ll r) {
	while (r > l + 1) {
		ll med = (l + r) >> 1, count_med = count(n, p, a, med);
		if (count_med <= k) {
			r = med;
		} else {
			l = med;
		}
	}
	return r;
}

int main() {
	int n, p, k;
	cin >> n >> p >> k;
	vector<vector<ll>> a(n, vector<ll>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int count_l = count(n, p, a, 0), count_r = count(n, p, a, p + 1);
	if ((count_l < k) || (count_r > k)) {
		cout << 0 << endl;
	} else {
		ll l = binary_search(n, p, k, a, 0, INF), r = binary_search(n, p, k - 1, a, 0, INF);
		if (r - l >= (INF >> 1)) {
			cout << "Infinity" << endl;
		} else {
			cout << (r - l) << endl;
		}
	}
	return 0;
}
