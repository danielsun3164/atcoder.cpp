#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static double EPS = 1E-7;

bool check(int n, int k, vector<pair<ll, double>> &wp, double target) {
	vector<double> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = wp[i].first * (wp[i].second - target) / 100.0;
	}
	sort(v.begin(), v.end());
	double sum = 0.0;
	for (int i = n - 1; i >= n - k; i--) {
		sum += v[i];
	}
	return sum >= 0.0;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<pair<ll, double>> wp(n);
	for (int i = 0; i < n; i++) {
		cin >> wp[i].first >> wp[i].second;
	}
	double ok = 0.0, ng = 100.0;
	while (ng > ok + EPS) {
		double med = (ok + ng) / 2.0;
		if (check(n, k, wp, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << setprecision(20) << ok << endl;
	return 0;
}
