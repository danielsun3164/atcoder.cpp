#include <bits/stdc++.h>
using namespace std;

const double EPS = 1E-6;

vector<pair<double, double>> input(int n) {
	vector<int> x(n), y(n);
	int sum_x = 0, sum_y = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		sum_x += x[i];
		sum_y += y[i];
	}
	vector<pair<double, double>> v(n);
	for (int i = 0; i < n; i++) {
		x[i] = x[i] * n - sum_x;
		y[i] = y[i] * n - sum_y;
		v[i].first = hypot(x[i], y[i]);
		v[i].second = atan2(y[i], x[i]);
	}
	sort(v.begin(), v.end(), greater<pair<double, double>>{});
	return v;
}

double adjust(double d) {
	if (d > M_PI) {
		return d - 2 * M_PI;
	} else if (d <= -M_PI) {
		return d + 2 * M_PI;
	}
	return d;
}

bool check(vector<pair<double, double>> &s, vector<pair<double, double>> &t, double diff) {
	int n = t.size();
	vector<pair<double, double>> new_t(n);
	for (int i = 0; i < n; i++) {
		new_t[i].first = t[i].first;
		new_t[i].second = (t[i].first < EPS) ? 0.0 : adjust(t[i].second + diff);
	}
	sort(new_t.begin(), new_t.end(), greater<pair<double, double>>{});
	for (int i = 0; i < n; i++) {
		if ((abs(s[i].first - new_t[i].first) >= EPS) ||
			(abs(s[i].second - new_t[i].second) >= EPS)) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int n;
	cin >> n;
	vector<pair<double, double>> s = input(n), t = input(n);
	double max_s = s[0].first, max_t = t[0].first;
	if (abs(max_s - max_t) < EPS) {
		int index = 0;
		while ((index < n) && ((max_t - t[index].first) < EPS)) {
			if (check(s, t, s[0].second - t[index].second)) {
				cout << "Yes" << endl;
				return 0;
			}
			index++;
		}
	}
	cout << "No" << endl;
	return 0;
}
