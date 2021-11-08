#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;

vector<vector<mint>> multiply(vector<vector<mint>> &a, vector<vector<mint>> &b) {
	vector<vector<mint>> r(a.size(), vector<mint>(b[0].size()));
	for (int i = 0; i < int(a.size()); i++) {
		for (int j = 0; j < int(b[0].size()); j++) {
			for (int k = 0; k < int(a[i].size()); k++) {
				r[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return r;
}

vector<vector<mint>> pow(vector<vector<mint>> &m, int k) {
	vector<vector<mint>> r(m.size(), vector<mint>(m.size()));
	for (int i = 0; i < int(r.size()); i++) {
		r[i][i] = 1;
	}
	while (k) {
		if (1 & k) {
			r = multiply(r, m);
		}
		m = multiply(m, m);
		k >>= 1;
	}
	return r;
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<mint>> a(1, vector<mint>(n));
	for (int i = 0; i < n; i++) {
		int ta;
		cin >> ta;
		a[0][i] = ta;
	}
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		edges[x].emplace_back(y);
		edges[y].emplace_back(x);
	}
	vector<vector<mint>> ma(n, vector<mint>(n));
	for (int i = 0; i < n; i++) {
		ma[i][i] = m - edges[i].size();
		ma[i][i] /= m;
		for (int j : edges[i]) {
			mint t = 1; // @suppress("Invalid arguments")
			ma[i][i] += t / m / 2;
			ma[i][j] += t / m / 2;
		}
	}
	vector<vector<mint>> p = pow(ma, k);
	vector<vector<mint>> result = multiply(a, p);
	for (auto v : result[0]) {
		cout << v.val() << endl;
	}
	return 0;
}
