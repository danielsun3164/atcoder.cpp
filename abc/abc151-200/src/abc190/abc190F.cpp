#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	atcoder::fenwick_tree<long long> ft(n);
	long long ans = 0;
	for (int ai : a) {
		ans += ft.sum(ai, n);
		ft.add(ai, 1L);
	}
	for (int ai : a) {
		cout << ans << endl;
		ans += n - 1 - 2 * ai;
	}
	return 0;
}
