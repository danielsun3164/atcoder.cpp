#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll INF = LONG_LONG_MAX >> 1;

bool check(vector<pair<ll, ll>> &g, int k, ll min_dist) {
	int n = g.size();
	vector<vector<int>> v = { { 0 } };
	for (int i = 1; i < n; i++) {
		bool found = false;
		for (vector<int> vi : v) {
			ll m = 0LL;
			for (int vii : vi) {
				m = max(m,
						(g[i].first - g[vii].first) * (g[i].first - g[vii].first)
								+ (g[i].second - g[vii].second) * (g[i].second - g[vii].second));
			}
			if (m <= min_dist) {
				vi.emplace_back(i);
				found = true;
				break;
			}
		}
		if (!found) {
			vector<int> vii = { i };
			v.emplace_back(vii);
			if (int(v.size()) > k) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> x(n), y(n);
	vector<pair<ll, ll>> gx(n), gy(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		gx[i].first = gy[i].second = x[i];
		gy[i].first = gx[i].second = y[i];
	}
	sort(gx.begin(), gx.end());
	sort(gy.begin(), gy.end());
	ll left = 0L, right = INF;
	while (right > left + 1) {
		ll med = (left + right) >> 1;
		if (check(gx, k, med) && check(gy, k, med)) {
			right = med;
		} else {
			left = med;
		}
	}
	cout << right << endl;
	return 0;
}
