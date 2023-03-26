#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i) {
			ans += min(a[i] - a[i - 1], t);
		}
	}
	cout << ans + t << endl;
	return 0;
}
