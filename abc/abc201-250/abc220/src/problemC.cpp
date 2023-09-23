#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n), sum(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum[i] = ((i > 0) ? sum[i - 1] : 0LL) + a[i];
	}
	ll x;
	cin >> x;
	ll d = x % sum[n - 1];
	cout << (x / sum[n - 1] * n + distance(sum.begin(), upper_bound(sum.begin(), sum.end(), d)) + 1) << endl;
	return 0;
}
