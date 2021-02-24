#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool ok(vector<int> xs, ll radix, ll m) {
	__int128 sum = 0, r = 1;
	for (long unsigned int i = 0; i < xs.size(); i++) {
		sum += xs[i] * r;
		if (sum > m) {
			return false;
		}
		r *= radix;
		if ((i < xs.size() - 1) && (r > m)) {
			return false;
		}
	}
	return true;
}

int main(void) {
	string x;
	ll m;
	cin >> x >> m;
	if (1 == x.size()) {
		ll lx = stoll(x);
		cout << ((m >= lx) ? 1 : 0) << endl;
	} else {
		vector<int> xs(x.size());
		int d = -1;
		for (long unsigned int i = 0; i < x.size(); i++) {
			xs[i] = x[x.size() - 1 - i] - '0';
			d = max(d, xs[i]);
		}
		ll left = d, right = m + 1;
		while (right > left + 1) {
			ll med = (left + right) >> 1;
			if (ok(xs, med, m)) {
				left = med;
			} else {
				right = med;
			}
		}
		cout << (left - d) << endl;
	}
	return 0;
}
