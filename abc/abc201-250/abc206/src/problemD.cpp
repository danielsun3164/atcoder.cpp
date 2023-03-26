#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	int max_a = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		max_a = max(max_a, a[i]);
	}
	atcoder::dsu d(max_a + 1);
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) {
			d.merge(a[i], a[n - 1 - i]);
		}
	}
	int ans = 0;
	for (int i = 0; i <= max_a; i++) {
		if (i == d.leader(i)) {
			ans += d.size(i) - 1;
		}
	}
	cout << ans << endl;
	return 0;
}
