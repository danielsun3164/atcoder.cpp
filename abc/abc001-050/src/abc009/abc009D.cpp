#include <bits/stdc++.h>
using namespace std;
using uint = unsigned int;

vector<vector<uint>> multiply(vector<vector<uint>> &a, vector<vector<uint>> &b) {
	vector<vector<uint>> res(a.size(), vector<uint>(b[0].size(), 0));
	for (int i = 0; i < int(a.size()); i++) {
		for (int j = 0; j < int(b[0].size()); j++) {
			for (int k = 0; k < int(a[i].size()); k++) {
				res[i][j] ^= a[i][k] & b[k][j];
			}
		}
	}
	return res;
}

vector<vector<uint>> pow(vector<vector<uint>> &a, int m) {
	vector<vector<uint>> res(a.size(), vector<uint>(a.size(), 0));
	for (int i = 0; i < int(a.size()); i++) {
		res[i][i] = UINT32_MAX;
	}
	while (m > 0) {
		if (m & 1) {
			res = multiply(res, a);
		}
		a = multiply(a, a);
		m >>= 1;
	}
	return res;
}

int main(void) {
	int k, m;
	cin >> k >> m;
	vector<vector<uint>> a(k, vector<uint>(1)), c(k, vector<uint>(k, 0));
	for (int i = 0; i < k; i++) {
		cin >> a[k - 1 - i][0];
	}
	for (int i = 0; i < k; i++) {
		cin >> c[0][i];
		if (i < k - 1) {
			c[i + 1][i] = UINT32_MAX;
		}
	}
	if (m <= k) {
		cout << a[k - m][0] << endl;
	} else {
		vector<vector<uint>> d = pow(c, m - k);
		vector<vector<uint>> res = multiply(d, a);
		cout << res[0][0] << endl;
	}
	return 0;
}
