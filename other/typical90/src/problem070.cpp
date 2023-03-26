#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll manhattan_sum(vector<ll> &v, ll x) {
	ll result = 0LL;
	for (ll vi : v) {
		result += abs(vi - x);
	}
	return result;
}

ll min_manhattan_sum(vector<ll> &v, vector<ll> &x) {
	ll result = LONG_LONG_MAX >> 1;
	for (ll xi : x) {
		result = min(result, manhattan_sum(v, xi));
	}
	return result;
}

ll calc(vector<ll> &v) {
	int n = v.size();
	ll sum = accumulate(v.begin(), v.end(), 0LL);
	vector<ll> x;
	x.emplace_back(sum / n);
	if (0 != sum % n) {
		x.emplace_back(sum / n + (sum < 0) ? -1 : 1);
	}
	sort(v.begin(), v.end());
	x.emplace_back(v[n >> 1]);
	if (0 == (1 & n)) {
		x.emplace_back(v[(n >> 1) - 1]);
	}
	return min_manhattan_sum(v, x);
}

int main() {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	cout << (calc(x) + calc(y)) << endl;
	return 0;
}
