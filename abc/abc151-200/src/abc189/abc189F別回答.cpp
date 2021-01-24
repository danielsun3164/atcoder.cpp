#include <bits/stdc++.h>
using namespace std;

const double INF = 8e10;
const double TOLERANCE = 1E-3;

// 解法2 二分探索 の実装
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<bool> ng(n, false);
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		ng[a] = true;
	}
	vector<double> h(n + m, 0.0);
	double left = 0.0, right = INF;
	while (right - left >= TOLERANCE) {
		double sum = 0.0, med = (left + right) / 2.0;
		for (int i = n - 1; i >= 0; i--) {
			if (ng[i]) {
				h[i] = med;
			} else {
				h[i] = sum / m + 1.0;
			}
			sum -= h[i + m] - h[i];
		}
		if (h[0] > med) {
			left = med;
		} else {
			right = med;
		}
	}
	if (INF == right) {
		cout << -1 << endl;
	} else {
		cout << fixed << right << endl;
	}
	return 0;
}
