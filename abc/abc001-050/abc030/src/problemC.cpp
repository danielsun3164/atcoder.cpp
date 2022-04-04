#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int ans = 0, now = 0, ac = 0, bc = 0;
	while (true) {
		while ((ac < n) && (now > a[ac])) {
			ac++;
		}
		if (ac >= n) {
			break;
		}
		now = a[ac] + x;
		while ((bc < m) && (now > b[bc])) {
			bc++;
		}
		if (bc >= m) {
			break;
		}
		now = b[bc] + y;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
