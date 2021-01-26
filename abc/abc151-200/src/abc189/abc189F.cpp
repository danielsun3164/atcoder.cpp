#include <bits/stdc++.h>
using namespace std;

// 解法1 1次式を持つDP の実装
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<bool> ng(n, false);
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		ng[a] = true;
	}
	vector<vector<double>> g(n + m, vector<double>(2, 0.0));
	vector<double> sum(2, 0.0);
	for (int i = n - 1; i >= 0; i--) {
		if (ng[i]) {
			g[i][0] = 1.0;
			g[i][1] = 0.0;
		} else {
			g[i][0] = sum[0] / m;
			g[i][1] = sum[1] / m + 1.0;
		}
		sum[0] -= g[i + m][0] - g[i][0];
		sum[1] -= g[i + m][1] - g[i][1];
	}
	if (abs(g[0][0] - 1.0) < 0.00000000001) {
		cout << -1 << endl;
	} else {
		cout << fixed << (g[0][1] / (1.0 - g[0][0])) << endl;
	}
	return 0;
}
