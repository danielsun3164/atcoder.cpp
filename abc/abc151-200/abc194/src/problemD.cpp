#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	double ans = 0.0;
	for (int i = 1; i < n; i++) {
		ans += n * 1.0 / i;
	}
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}
