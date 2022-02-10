#include <bits/stdc++.h>
using namespace std;

const double TOLERANCE = 1E-7;

pair<double, double> pv(double len, double x, double y) {
	double plen = hypot(x, y);
	return {x*len/plen, y*len/plen};
}

bool isOk(vector<pair<int, int>> &p, double r) {
	vector<pair<double, double>> v;
	for (int i = 0; i < int(p.size()); i++) {
		for (int j = i + 1; j < int(p.size()); j++) {
			double d = hypot(p[i].first - p[j].first, p[i].second - p[j].second);
			double mx = (p[i].first + p[j].first) / 2.0, my = (p[i].second + p[j].second) / 2.0;
			if (abs(d - 2 * r) < TOLERANCE) {
				v.push_back( { mx, my });
			} else if (d < 2 * r) {
				double h = sqrt(r * r - d * d / 4.0);
				pair<double, double> vec = pv(h, p[i].second - p[j].second, p[j].first - p[i].first);
				v.push_back( { mx + vec.first, my + vec.second });
				v.push_back( { mx - vec.first, my - vec.second });
			}
		}
	}
	for (pair<double, double> pd : v) {
		bool result = true;
		for (pair<int, int> pi : p) {
			double d = hypot(pd.first - pi.first, pd.second - pi.second);
			if (d - r > TOLERANCE) {
				result = false;
				break;
			}
		}
		if (result) {
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	double ng = 0.0, ok = 1500.0;
	while (ok - ng > TOLERANCE) {
		double med = (((ok - ng) < 1.0) && (ng > 0.0)) ? sqrt(ng * ok) : (ng + ok) / 2.0;
		if (isOk(p, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << setprecision(10) << ok << endl;
	return 0;
}
