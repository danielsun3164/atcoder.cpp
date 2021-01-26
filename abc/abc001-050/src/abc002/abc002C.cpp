#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	cout << fixed << (abs((xb - xa) * (yc - ya) - (yb - ya) * (xc - xa)) / 2.0) << endl;
	return 0;
}
