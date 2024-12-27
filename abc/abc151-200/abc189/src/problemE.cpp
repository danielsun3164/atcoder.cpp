#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<ll>> OP1 = {{0, -1L, 0}, {1L, 0, 0}, {0, 0, 1L}};
vector<vector<ll>> OP2 = {{0, 1L, 0}, {-1L, 0, 0}, {0, 0, 1L}};

vector<vector<ll>> mul(vector<vector<ll>> &a, vector<vector<ll>> &b) {
	vector<vector<ll>> r(a.size(), vector<ll>(b[0].size(), 0L));
	for (int i = 0; i < int(a.size()); i++) {
		for (int j = 0; j < int(b[0].size()); j++) {
			for (int k = 0; k < int(a[i].size()); k++) {
				r[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return r;
}

int main(void) {
	int n, m, q;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	cin >> m;
	vector<int> op(m), p(m);
	for (int i = 0; i < m; i++) {
		cin >> op[i];
		if (op[i] >= 3) {
			cin >> p[i];
		}
	}
	cin >> q;
	vector<vector<pair<int, int>>> qs(m + 1);
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		b--;
		qs[a].emplace_back(make_pair(b, i));
	}
	vector<vector<ll>> now = {{1L, 0, 0}, {0, 1L, 0}, {0, 0, 1L}};
	vector<vector<ll>> ans(q);
	for (int i = 0; i <= m; i++) {
		for (pair<int, int> pa : qs[i]) {
			vector<vector<ll>> t = {{x[pa.first], y[pa.first], 1L}};
			ans[pa.second] = mul(t, now)[0];
		}
		if (i < m) {
			switch (op[i]) {
				case 1:
					now = mul(now, OP1);
					break;
				case 2:
					now = mul(now, OP2);
					break;
				case 3: {
					vector<vector<ll>> t = {{-1L, 0, 0}, {0, 1L, 0}, {2L * p[i], 0, 1L}};
					now = mul(now, t);
					break;
				}
				case 4:
				default: {
					vector<vector<ll>> t = {{1L, 0, 0}, {0, -1L, 0}, {0, 2L * p[i], 1L}};
					now = mul(now, t);
					break;
				}
			}
		}
	}
	for (int i = 0; i < q; i++) {
		cout << ans[i][0] << " " << ans[i][1] << endl;
	}
	return 0;
}
