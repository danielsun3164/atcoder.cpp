#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, k, l;
	cin >> n >> k >> l;
	atcoder::dsu d1(n);
	for (int i = 0; i < k; i++) {
		int p, q;
		cin >> p >> q;
		d1.merge(p - 1, q - 1);
	}
	atcoder::dsu d2(n);
	for (int i = 0; i < l; i++) {
		int p, q;
		cin >> p >> q;
		d2.merge(p - 1, q - 1);
	}
	map<pair<int, int>, int> mp;
	for (int i = 0; i < n; i++) {
		mp[{d1.leader(i), d2.leader(i)}]++;
	}
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << mp[{d1.leader(i), d2.leader(i)}];
	}
	cout << endl;
	return 0;
}
