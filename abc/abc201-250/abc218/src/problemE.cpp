#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m), c(m);
	vector<pair<int, int>> v;
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i] >> c[i];
		a[i]--;
		b[i]--;
		v.push_back({c[i], i});
	}
	sort(v.begin(), v.end());
	atcoder::dsu d(n);
	ll answer = 0LL;
	for (pair<int, int> p : v) {
		if ((c[p.second] > 0) && (d.same(a[p.second], b[p.second]))) {
			answer += c[p.second];
		} else {
			d.merge(a[p.second], b[p.second]);
		}
	}
	cout << answer << endl;
	return 0;
}
