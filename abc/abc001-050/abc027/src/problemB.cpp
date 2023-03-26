#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), sum(n + 1);
	sum[0] = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum[i + 1] = sum[i] + a[i];
	}
	if (0 != sum[n] % n) {
		cout << -1 << endl;
		return 0;
	}
	int avg = sum[n] / n, ans = n;
	for (int i = 0; i < n; i++) {
		if (sum[i + 1] == avg * (i + 1)) {
			ans--;
		}
	}
	cout << ans << endl;
	return 0;
}
