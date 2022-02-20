#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	set<ll> s;
	vector<ll> l(n), r(n);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t >> l[i] >> r[i];
		l[i] <<= 1;
		r[i] <<= 1;
		if (0 == (1 & t)) {
			r[i]--;
		}
		if (t >= 3) {
			l[i]++;
		}
		s.insert(l[i]);
		s.insert(r[i]);
	}
	map<ll, int> m;
	int count = 1;
	for (int v : s) {
		m[v] = count++;
	}
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		v[i].first = m[r[i]];
		v[i].second = m[l[i]];
	}
	sort(v.begin(), v.end());
	atcoder::fenwick_tree<int> ft(s.size() + 2);
	ll ans = 0LL;
	for (pair<int, int> p : v) {
		int nl = p.second, nr = p.first;
		ans += ft.sum(nl, nr + 1);
		ft.add(nr, 1);
	}
	cout << ans << endl;
	return 0;
}
