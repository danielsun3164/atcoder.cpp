#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		int s = -1;
		for (int j = 0; j < n; j++) {
			if (0 == c[i] % c[j]) {
				s++;
			}
		}
		ans += (1 & s) ? 0.5 : (s + 2.0) / (2 * s + 2.0);
	}
	cout << setprecision(10) << ans << endl;
	return 0;
}
