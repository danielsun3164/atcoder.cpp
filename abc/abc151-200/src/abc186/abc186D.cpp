#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n), sum(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int> { });
	sum[0] = a[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	ll ans = 0LL;
	for (int i = 0; i < n - 1; i++) {
		ans += a[i] * (n - i - 1) - (sum[n - 1] - sum[i]);
	}
	cout << ans << endl;
	return 0;
}
