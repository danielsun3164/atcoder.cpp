#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int k, n;
	cin >> k >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = a[0] + k - a[n - 1];
	for (int i = 1; i < n; i++) {
		ans = max(ans, a[i] - a[i - 1]);
	}
	cout << k - ans << endl;
	return 0;
}
