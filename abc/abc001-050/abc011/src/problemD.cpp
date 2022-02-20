#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, d, x, y;
	cin >> n >> d >> x >> y;
	if ((x % d) || (y % d)) {
		cout << 0.0 << endl;
		return 0;
	}
	vector<vector<double>> c(n + 1, vector<double>(n + 1, 0.0));
	c[0][0] = 1.0;
	for (int i = 1; i <= n; i++) {
		c[i][0] = c[i - 1][0] / 2.0;
		for (int j = 1; j <= n; j++) {
			c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) / 2.0;
		}
	}
	int xd = x / d, yd = y / d;
	double ans = 0.0;
	for (int i = 0; i <= n; i++) {
		if ((i >= xd) && (n - i >= yd) && (!(1 & (i - xd))) && (!(1 & (n - i - yd)))) {
			ans += c[n][i] * c[i][(i + xd) / 2] * c[n - i][(n - i + yd) / 2];
		}
	}
	cout << setprecision(15) << ans << endl;
	return 0;
}
