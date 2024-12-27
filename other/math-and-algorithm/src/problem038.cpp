#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::fenwick_tree<ll> ft(n);
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		ft.add(i, a);
	}
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << ft.sum(l - 1, r) << endl;
	}
	return 0;
}
