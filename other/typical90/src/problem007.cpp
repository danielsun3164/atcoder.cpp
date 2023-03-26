#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int b;
		cin >> b;
		auto idx = lower_bound(a.begin(), a.end(), b);
		int ans = abs(b - *idx);
		if (idx > a.begin()) {
			ans = min(ans, abs(b - *(idx - 1)));
		}
		cout << ans << endl;
	}
	return 0;
}
