#include <bits/stdc++.h>
using namespace std;

const double EPS = 1E-8;

int a, b, c;

double f(double t) {
	return a * t + b * sin(c * t * M_PI) - 100.0;
}

int main(void) {
	cin >> a >> b >> c;
	double from = (100.0 - b) / a, to = (100.0 + b) / a;
	while (true) {
		double med = (to + from) / 2.0;
		double fn = f(med);
		if (abs(fn) < EPS) {
			cout << setprecision(20) << med << endl;
			return 0;
		}
		if (fn > 0.0) {
			to = med;
		} else {
			from = med;
		}
	}
	return 0;
}
