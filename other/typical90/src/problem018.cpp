#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, l, x, y, q;
	cin >> t >> l >> x >> y >> q;
	double r = l / 2.0;
	for (int i = 0; i < q; i++) {
		int e;
		cin >> e;
		double angle = 2.0 * M_PI * e / t;
		double ny = -sin(angle) * r, nz = l / 2.0 - cos(angle) * r;
		cout << fixed << setprecision(10) << (atan2(nz, hypot(x, y - ny)) / M_PI * 180.0) << endl;
	}
	return 0;
}
