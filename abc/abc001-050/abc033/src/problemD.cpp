#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const double EPS = 1E-9;

double convert(double angle) {
	if (angle > M_PI) {
		return angle - M_PI * 2.0;
	}
	if (angle < -M_PI) {
		return angle + M_PI * 2.0;
	}
	return angle;
}

int dist(int from, int to, int n) {
	return (to >= from) ? to - from : to + n - from;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	ll right = 0LL, obtuse = 0LL;
	for (int i = 0; i < n; i++) {
		vector<double> angles;
		for (int j = 0; j < n; j++) {
			if (j != i) {
				angles.emplace_back(atan2((double)y[j] - y[i], (double)x[j] - x[i]));
			}
		}
		sort(angles.begin(), angles.end());
		for (int j = 0; j < n - 1; j++) {
			double now = angles[j];
			double mx = now + M_PI / 2.0;
			int from_mx = distance(angles.begin(),
								   lower_bound(angles.begin(), angles.end(), convert(mx - EPS)));
			int to_mx = distance(angles.begin(),
								 upper_bound(angles.begin(), angles.end(), convert(mx + EPS)));
			right += dist(from_mx, to_mx, n - 1);
			double mn = now - M_PI / 2.0;
			int from_mn = distance(angles.begin(),
								   lower_bound(angles.begin(), angles.end(), convert(mn - EPS)));
			int to_mn = distance(angles.begin(),
								 upper_bound(angles.begin(), angles.end(), convert(mn + EPS)));
			right += dist(from_mn, to_mn, n - 1);
			obtuse += dist(to_mx, from_mn, n - 1);
		}
	}
	right >>= 1;
	obtuse >>= 1;
	int acute = n * ll(n - 1) * (n - 2) / 6 - right - obtuse;
	cout << acute << " " << right << " " << obtuse << endl;
	return 0;
}
