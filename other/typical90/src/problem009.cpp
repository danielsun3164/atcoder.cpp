#include <bits/stdc++.h>
using namespace std;

double calc(double a, double b) {
	return min(abs(a - b), 2.0 * M_PI - abs(a - b));
}

int main() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		set<double> s;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				s.insert(atan2(y[j] - y[i], x[j] - x[i]));
			}
		}
		for (double d : s) {
			double dpi = (d >= 0) ? d - M_PI : d + M_PI;
			auto idx = s.lower_bound(dpi);
			ans = max(ans, (s.end() == idx) ? calc(*s.begin(), d) : calc(*idx, d));
			ans = max(ans, (s.begin() == idx) ? calc(*s.rbegin(), d) : calc(*(prev(idx)), d));
		}
	}
	cout << setprecision(10) << (ans / M_PI * 180.0) << endl;
	return 0;
}
