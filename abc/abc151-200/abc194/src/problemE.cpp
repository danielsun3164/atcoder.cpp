#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), pre(n, -1), inv(n, 0), res(n, n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		inv[a[i]] = max(inv[a[i]], i - pre[a[i]] - 1);
		res[a[i]] = min(res[a[i]], max(inv[a[i]], n - i - 1));
		pre[a[i]] = i;
	}
	int ans = n;
	for (int i = 0; i < n; i++) {
		if (res[i] >= m) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
