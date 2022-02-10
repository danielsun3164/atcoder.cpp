#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0, idx = 0;
	while (x > 0) {
		if (1 & x) {
			ans += a[idx];
		}
		idx++;
		x >>= 1;
	}
	cout << ans << endl;
	return 0;
}
