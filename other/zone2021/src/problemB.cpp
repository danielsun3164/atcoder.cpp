#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d, h;
	cin >> n >> d >> h;
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		int di, hi;
		cin >> di >> hi;
		ans = max(ans, h - ((h - hi) * 1.0 / (d - di) * d));
	}
	cout << ans << endl;
	return 0;
}
