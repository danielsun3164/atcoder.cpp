#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> l(m), r(m);
	vector<pair<int, int>> v(m);
	for (int i = 0; i < m; i++) {
		cin >> l[i] >> r[i];
		v[i].first = r[i];
		v[i].second = l[i];
	}
	sort(v.begin(), v.end());
	ll ans = m * ll(m - 1) / 2LL;
	vector<int> v1(n + 1, 0), v2(n + 1, 0), v3(n + 1, 0);
	for (int i = 0; i < m; i++) {
		v1[r[i]]++;
		v2[l[i] - 1]++;
		v3[l[i]]++;
		v3[r[i]]++;
	}
	ll ans1 = 0LL, ans2 = 0LL, ans3 = 0LL;
	for (int i = 1; i <= n; i++) {
		v1[i] += v1[i - 1];
		ans1 += v1[i] * ll(v2[i]);
		ans2 += v3[i] * ll(v3[i] - 1LL) / 2LL;
	}
	atcoder::fenwick_tree<int> ft(n + 2);
	for (pair<int, int> p : v) {
		int cl = p.second, cr = p.first;
		ans3 += ft.sum(cl, cr);
		ft.add(cl - 1, 1);
	}
	cout << (ans - ans1 - ans2 - ans3) << endl;
	return 0;
}
