#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll ans = 0LL;
	for (int i = 0; i < n; i++) {
		ans += abs(b[i] - a[i]);
	}
	cout << ans << endl;
	return 0;
}
