#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

vector<vector<mint>> multiply(vector<vector<mint>> &a, vector<vector<mint>> &b) {
	int n = a.size(), m = b.size(), p = b[0].size();
	vector<vector<mint>> result(n, vector<mint>(p, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return result;
}

vector<vector<mint>> pow(vector<vector<mint>> &v, ll n) {
	int m = v.size();
	vector<vector<mint>> result(m, vector<mint>(m, 0));
	for (int i = 0; i < m; i++) {
		result[i][i] = 1;
	}
	while (n > 0LL) {
		if (1LL & n) {
			result = multiply(result, v);
		}
		v = multiply(v, v);
		n >>= 1;
	}
	return result;
}

int main() {
	ll n;
	cin >> n;
	vector<vector<mint>> f = {{1, 1, 2}}, v = {{0, 0, 1}, {1, 0, 1}, {0, 1, 1}};
	v = pow(v, n - 3);
	cout << multiply(f, v)[0][2].val() << endl;
	return 0;
}
