#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int m = a[i];
		for (int j = i; j < n; j++) {
			m = min(m, a[j]);
			ans = max(ans, m * (j - i + 1));
		}
	}
	cout << ans << endl;
	return 0;
}
