#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int r, x, y;
	cin >> r >> x >> y;
	double d = hypot(x, y);
	if (d == r) {
		cout << 1 << endl;
	} else if (d <= r * 2.0) {
		cout << 2 << endl;
	} else {
		cout << ((int) ceil(d / r)) << endl;
	}
	return 0;
}
