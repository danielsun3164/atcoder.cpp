#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	double ans = 1.0 / n * 1.0 / n * 1.0 / n;
	ans += 1.0 / n * 1.0 / n * (k - 1) / n * 3;
	ans += 1.0 / n * 1.0 / n * (n - k) / n * 3;
	ans += 1.0 / n * (k - 1) / n * (n - k) / n * 6;
	cout << setprecision(15) << ans << endl;
	return 0;
}
