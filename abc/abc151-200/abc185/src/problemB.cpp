#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, t;
	cin >> n >> m >> t;
	vector<int> a(m + 2), b(m + 2);
	a[0] = b[0] = 0;
	for (int i = 1; i <= m; i++) {
		cin >> a[i] >> b[i];
	}
	a[m + 1] = b[m + 1] = t;
	int x = n;
	for (int i = 1; i <= m + 1; i++) {
		x -= a[i] - b[i - 1];
		if (x <= 0) {
			cout << "No" << endl;
			return 0;
		}
		x += b[i] - a[i];
		if (x > n) {
			x = n;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
