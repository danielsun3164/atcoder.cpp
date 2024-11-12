#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

vector<vector<ll>> multiply(vector<vector<ll>> &a, vector<vector<ll>> &b) {
	int n = a.size(), m = a[0].size(), p = b[0].size();
	vector<vector<ll>> v(n, vector<ll>(p, INF));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < m; k++) {
				v[i][j] = min(v[i][j], max(a[i][k], b[k][j]));
			}
		}
	}
	return v;
}

vector<vector<ll>> pow(vector<vector<ll>> &a, ll m) {
	int n = a.size();
	vector<vector<ll>> v(n, vector<ll>(n, INF));
	for (int i = 0; i < n; i++) {
		v[i][i] = -INF;
	}
	while (m) {
		if (1LL & m) {
			v = multiply(v, a);
		}
		m >>= 1;
		if (m) {
			a = multiply(a, a);
		}
	}
	return v;
}

int main(void) {
	int n, t, l;
	cin >> n >> t >> l;
	vector<vector<ll>> mat(n, vector<ll>(n, INF));
	for (int i = 1; i <= t; i++) {
		int u, v;
		cin >> u >> v;
		mat[v - 1][u - 1] = i;
	}
	mat = pow(mat, l);
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << ((mat[i][0] > INF / 2) ? -1LL : mat[i][0]);
	}
	cout << endl;
	return 0;
}
