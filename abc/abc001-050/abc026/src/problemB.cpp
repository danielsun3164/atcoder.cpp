#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> r(n);
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}
	sort(r.begin(), r.end(), greater<int>());
	double ans = 0.0, sign = 1.0;
	for (int i = 0; i < n; i++) {
		ans += sign * r[i] * r[i] * M_PI;
		sign = -sign;
	}
	cout << setprecision(10) << ans << endl;
	return 0;
}
