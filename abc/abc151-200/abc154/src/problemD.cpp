#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<double> e(n);
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		e[i] = (p + 1.0) / 2.0;
	}
	double now = 0.0;
	for (int i = 0; i < k; i++) {
		now += e[i];
	}
	double ans = now;
	for (int i = k; i < n; i++) {
		now = now - e[i - k] + e[i];
		ans = max(ans, now);
	}
	cout << setprecision(10) << ans << endl;
	return 0;
}
