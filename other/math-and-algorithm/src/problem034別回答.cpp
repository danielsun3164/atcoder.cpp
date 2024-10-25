#include <bits/stdc++.h>
using namespace std;

const static double INF = DBL_MAX;

bool compare_y(pair<double, double> a, pair<double, double> b) {
	return a.second < b.second;
}

double closest_pair(vector<pair<double, double>> &a, int l, int r) {
	int n = r - l;
	if (n <= 1) {
		return INF;
	}
	int m = l + n / 2;
	double x = a[m].first, d = min(closest_pair(a, l, m), closest_pair(a, m, r));
	inplace_merge(a.begin() + l, a.begin() + m, a.begin() + r, compare_y);

	vector<pair<double, double>> v;
	for (int i = l; i < r; i++) {
		if (abs(a[i].first - x) < d) {
			for (int j = int(v.size()) - 1; j >= 0; j--) {
				double dx = a[i].first - v[j].first, dy = a[i].second - v[j].second;
				if (dy < d) {
					d = min(d, hypot(dx, dy));
				}
			}
			v.emplace_back(a[i]);
		}
	}
	return d;
}

int main() {
	int n;
	cin >> n;
	vector<pair<double, double>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	cout << fixed << setprecision(20) << closest_pair(a, 0, n) << endl;
	return 0;
}
