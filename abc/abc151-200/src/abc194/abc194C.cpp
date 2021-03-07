#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), sum(n);
	ll ans = 0L;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ans += (n - 1) * (ll) (a[i]) * a[i];
	}
	sort(a.begin(), a.end());
	sum[0] = 0;
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + a[i - 1];
		ans -= 2L * sum[i] * a[i];
	}
	cout << ans << endl;
	return 0;
}
