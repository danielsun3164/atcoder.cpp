#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(2)), b(n, vector<int>(2));
	vector<double> a_sum(2, 0.0), b_sum(2, 0.0);
	for (int i = 0; i < n; i++) {
		cin >> a[i][0] >> a[i][1];
		a_sum[0] += a[i][0];
		a_sum[1] += a[i][1];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i][0] >> b[i][1];
		b_sum[0] += b[i][0];
		b_sum[1] += b[i][1];
	}
	vector<double> a_cen(2), b_cen(2);
	a_cen[0] = a_sum[0] / n, a_cen[1] = a_sum[1] / n;
	b_cen[0] = b_sum[0] / n, b_cen[1] = b_sum[1] / n;
	double ar_max = 0.0, br_max = 0.0;
	for (int i = 0; i < n; i++) {
		ar_max = max(ar_max, hypot(a[i][0] - a_cen[0], a[i][1] - a_cen[1]));
		br_max = max(br_max, hypot(b[i][0] - b_cen[0], b[i][1] - b_cen[1]));
	}
	cout << setprecision(10) << br_max / ar_max << endl;
	return 0;
}
