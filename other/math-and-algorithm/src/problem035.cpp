#include <bits/stdc++.h>
using namespace std;

int main() {
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	double d = hypot(x1 - x2, y1 - y2);
	if (abs(r1 - r2) > d) {
		cout << 1 << endl;
	} else if (abs(r1 - r2) == d) {
		cout << 2 << endl;
	} else if (r1 + r2 == d) {
		cout << 4 << endl;
	} else if (r1 + r2 < d) {
		cout << 5 << endl;
	} else {
		cout << 3 << endl;
	}
	return 0;
}
