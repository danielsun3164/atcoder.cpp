#include <bits/stdc++.h>
using namespace std;

int main() {
	double ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	double bax = ax - bx, bay = ay - by, bcx = cx - bx, bcy = cy - by, cax = ax - cx, cay = ay - cy,
		   cbx = bx - cx, cby = by - cy;
	if (bax * bcx + bay * bcy < 0.0) {
		cout << fixed << setprecision(20) << hypot(bax, bay) << endl;
	} else if (cax * cbx + cay * cby < 0.0) {
		cout << fixed << setprecision(20) << hypot(cax, cay) << endl;
	} else {
		cout << fixed << setprecision(20) << (abs(bax * cay - bay * cax) / hypot(bcx, bcy)) << endl;
	}
	return 0;
}
