#include <bits/stdc++.h>
using namespace std;

bool same_line(int a1, int b1, int c1, int d1, int a2, int b2, int c2, int d2) {
	double p = (b2 * c2 - d2 * a2) * (c1 - a1) - (b1 * c1 - d1 * a1) * (c2 - a2);
	double q = (d1 - b1) * (c2 - a2) - (d2 - b2) * (c1 - a1);
	return (0.0 == p) && (0.0 == q);
}

bool intersect(int a1, int b1, int c1, int d1, int a2, int b2, int c2, int d2, double &x, double &y) {
	double denominator = (a1 - c1) * (b2 - d2) - (b1 - d1) * (a2 - c2);
	if (0.0 == denominator) {
		return false;
	}
	x = ((a1 * d1 - b1 * c1) * (a2 - c2) - (a1 - c1) * (a2 * d2 - b2 * c2)) / denominator;
	y = ((a1 * d1 - b1 * c1) * (b2 - d2) - (b1 - d1) * (a2 * d2 - b2 * c2)) / denominator;
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n), d(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		set<pair<double, double>> s;
		int same = 0;
		double x, y;
		for (int j = 0; j < i; j++) {
			bool result = intersect(a[i], b[i], c[i], d[i], a[j], b[j], c[j], d[j], x, y);
			if (result) {
				s.insert( { x, y });
			}
			if (same_line(a[i], b[i], c[i], d[i], a[j], b[j], c[j], d[j])) {
				same++;
			}
		}
		ans += (same > 0) ? 0 : 1 + s.size();
	}
	cout << ans + 1 << endl;
	return 0;
}
