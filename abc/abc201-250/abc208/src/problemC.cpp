#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n), order(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		order[i] = i;
	}
	sort(order.begin(), order.end(), [&](int x, int y) { return a[x] < a[y]; });
	vector<ll> ans(n, k / n);
	k %= n;
	for (int i = 0; i < k; i++) {
		ans[order[i]]++;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
