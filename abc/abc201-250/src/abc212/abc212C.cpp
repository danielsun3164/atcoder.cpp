#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int ans = INT_MAX, x = 0, y = 0;
	while ((x < n) && (y < m)) {
		ans = min(ans, abs(a[x] - b[y]));
		if (a[x] < b[y]) {
			x++;
		} else {
			y++;
		}
	}
	cout << ans << endl;
	return 0;
}
