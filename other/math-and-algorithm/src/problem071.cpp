#include <bits/stdc++.h>
using namespace std;

const static double EPS = 1E-8;

bool check(int n, vector<double> &a, vector<double> &b, vector<double> &c, double x, double y) {
	for (int i = 0; i < n; i++) {
		if (a[i] * x + b[i] * y > c[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<double> a(n), b(n), c(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}
	double answer = 0.0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] * b[j] != a[j] * b[i]) {
				double x = (c[i] * b[j] - c[j] * b[i]) / (a[i] * b[j] - a[j] * b[i]),
					   y = (c[i] * a[j] - c[j] * a[i]) / (b[i] * a[j] - b[j] * a[i]);
				if (check(n, a, b, c, x - EPS, y - EPS)) {
					answer = max(answer, x + y);
				}
			}
		}
	}
	cout << fixed << setprecision(10) << answer << endl;
	return 0;
}
