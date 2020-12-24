#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<long long> a(n), sum(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int> { });
	sum[0] = a[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	long long ans = 0L;
	for (int i = 0; i < n - 1; i++) {
		ans += a[i] * (n - i - 1) - (sum[n - 1] - sum[i]);
	}
	cout << ans << endl;
	return 0;
}
