#include <bits/stdc++.h>
using namespace std;

const double EPS = 1E-7;

bool calc(int n, int k, vector<double> &x, vector<double> &y, vector<double> &c, double time) {
	vector<double> nx, ny;
	for (int i = 0; i < n; i++) {
		nx.emplace_back(x[i]);
		ny.emplace_back(y[i]);
		double ri = time / c[i];
		for (int j = i + 1; j < n; j++) {
			double rj = time / c[j];
			double a = 2 * (x[j] - x[i]), b = 2 * (y[j] - y[i]),
				   cc = (x[i] + x[j]) * (x[i] - x[j]) + (y[i] + y[j]) * (y[i] - y[j]) +
						(rj + ri) * (rj - ri);
			double d = abs(a * x[i] + b * y[i] + cc), e = a * a + b * b;
			double f = e * ri * ri - d * d;
			if (f >= 0.0) {
				double h = sqrt(f);
				nx.emplace_back(x[i] + (a * d - b * h) / e);
				ny.emplace_back(y[i] + (b * d + a * h) / e);
				if (f > EPS) {
					nx.emplace_back(x[i] + (a * d + b * h) / e);
					ny.emplace_back(y[i] + (b * d - a * h) / e);
				}
			}
		}
	}
	for (int i = 0; i < int(nx.size()); i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (hypot(nx[i] - x[j], ny[i] - y[j]) * c[j] < time + EPS) {
				count++;
			}
		}
		if (count >= k) {
			return true;
		}
	}
	return false;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<double> x(n), y(n), c(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> c[i];
	}
	if (1 == k) {
		cout << 0.0 << endl;
		return 0;
	}
	double ok = 150000.0, ng = 0.0;
	while (ok - ng > EPS) {
		double med = ((ok - ng < 1.0) && (ng > 0.0)) ? sqrt(ok * ng) : (ok + ng) / 2.0;
		if (calc(n, k, x, y, c, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << setprecision(20) << ok << endl;
	return 0;
}
