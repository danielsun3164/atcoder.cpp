#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

vector<vector<double>> multiply(vector<vector<double>> &a, vector<vector<double>> &b) {
	int n = a.size(), m = a[0].size(), p = b[0].size();
	vector<vector<double>> result(n, vector<double>(p, 0.0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return result;
}

vector<vector<double>> pow(vector<vector<double>> &v, int m) {
	int n = v.size();
	vector<vector<double>> result(n, vector<double>(n, 0.0));
	for (int i = 0; i < n; i++) {
		result[i][i] = 1.0;
	}
	while (m > 0) {
		if (1 & m) {
			result = multiply(result, v);
		}
		v = multiply(v, v);
		m >>= 1;
	}
	return result;
}

int main() {
	int q;
	cin >> q;
	while (q--) {
		double x, y, z;
		int t;
		cin >> x >> y >> z >> t;
		vector<vector<double>> v1{{1.0, 1.0, 1.0}},
			v2{{1.0 - x, 0.0, x}, {y, 1.0 - y, 0.0}, {0.0, z, 1.0 - z}};
		vector<vector<double>> v3 = pow(v2, t);
		vector<vector<double>> result = multiply(v1, v3);
		for (int i = 0; i < N; i++) {
			cout << fixed << setprecision(20) << (i ? " " : "") << result[0][i];
		}
		cout << endl;
	}
	return 0;
}
