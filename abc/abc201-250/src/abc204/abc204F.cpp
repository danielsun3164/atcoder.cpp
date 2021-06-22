#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

const vector<int> LENS = { 1, 1, 2, 3, 5, 8, 13 };

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
	vector<vector<mint>> m(n, vector<mint>(n, 0));
	for (int prev = 0; prev < n; prev++) {
		for (int next = 0; next < n; next++) {
			int flag = 0;
			for (int k = 0; k < h; k++) {
				if ((0 == (prev & (1 << k))) && (0 == (next & (1 << k)))) {
					flag |= 1 << k;
				}
				if ((0 != (prev & (1 << k))) && (0 != (next & (1 << k)))) {
					flag = -1;
					break;
				}
			}
			if (-1 != flag) {
				m[prev][next] = 1;
				int c = 0;
				for (int k = 0; k <= h; k++) {
					if (flag & (1 << k)) {
						c++;
					} else {
						m[prev][next] *= LENS[c];
						c = 0;
					}
				}
			}
		}
	}
	m = pow(m, w);
	cout << m[0][0].val() << endl;
	return 0;
}
