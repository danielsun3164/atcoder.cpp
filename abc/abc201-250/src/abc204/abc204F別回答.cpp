#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

vector<vector<mint>> multiply(vector<vector<mint>> &a, vector<vector<mint>> &b) {
	vector<vector<mint>> r(a.size(), vector<mint>(b[0].size(), 0));
	for (int i = 0; i < int(a.size()); i++) {
		for (int j = 0; j < int(b[0].size()); j++) {
			for (int k = 0; k < int(a[i].size()); k++) {
				r[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return r;
}

vector<vector<mint>> pow(vector<vector<mint>> &a, ll m) {
	vector<vector<mint>> r(a.size(), vector<mint>(a.size(), 0));
	for (int i = 0; i < int(a.size()); i++) {
		r[i][i] = 1;
	}
	while (m > 0) {
		if (1 & m) {
			r = multiply(r, a);
		}
		a = multiply(a, a);
		m >>= 1;
	}
	return r;
}

int main() {
	int h;
	ll w;
	cin >> h >> w;
	int n = 1 << h;
	vector<mint> init(n);
	for (int mask = 0; mask < n; mask++) {
		bool nextPlace = false, ok = true;
		for (int i = 0; i < h; i++) {
			if (nextPlace) {
				if (mask & (1 << i)) {
					nextPlace = false;
				} else {
					ok = false;
				}
			} else if (mask & (1 << i)) {
				nextPlace = true;
			}
		}
		if (nextPlace) {
			ok = false;
		}
		init[mask] = ok ? 1 : 0;
	}
	vector<vector<mint>> m(n, vector<mint>(n, 0));
	for (int from = 0; from < n; from++) {
		for (int to = 0; to < n; to++) {
			for (int used = 0; used < n; used++) {
				bool ok = true;
				for (int i = 0; i < h; i++) {
					if ((used & (1 << i)) && ((from & (1 << i)) || (to & (1 << i)))) {
						ok = false;
						break;
					}
				}
				if (ok) {
					int to2 = to + used;
					m[to2][from] += init[to];
				}
			}
		}
	}
	vector<vector<mint>> v(n, vector<mint>(1));
	for (int i = 0; i < n; i++) {
		v[i][0] = init[i];
	}
	m = pow(m, w - 1);
	v = multiply(m, v);
	mint ans = 0;
	for (int i = 0; i < n; i++) {
		ans += v[i][0];
	}
	cout << ans.val() << endl;
	return 0;
}
