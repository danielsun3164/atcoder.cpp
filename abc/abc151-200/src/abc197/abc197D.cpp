#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x0, y0, xn2, yn2;
	cin >> n >> x0 >> y0 >> xn2 >> yn2;
	double cx = (x0 + xn2) / 2.0, cy = (y0 + yn2) / 2.0;
	double theta = M_PI * 2.0 / n;
	double x1 = (x0 - cx) * cos(theta) - (y0 - cy) * sin(theta) + cx;
	double y1 = (x0 - cx) * sin(theta) + (y0 - cy) * cos(theta) + cy;
	cout << fixed << setprecision(10) << x1 << " " << y1 << endl;
	return 0;
}
