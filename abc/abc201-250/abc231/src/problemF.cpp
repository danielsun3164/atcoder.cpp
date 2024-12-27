#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using ll = long long;

void compress(vector<int> &v) {
	map<int, int> mp;
	vector<int> v2 = v;
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());
	for (int i = 0; i < int(v2.size()); i++) {
		mp[v2[i]] = i;
	}
	for (int i = 0; i < int(v.size()); i++) {
		v[i] = mp[v[i]];
	}
}

ll op(ll a, ll b) {
	return a + b;
}

ll e() {
	return 0LL;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int &bi : b) {
		cin >> bi;
	}
	compress(a);
	compress(b);
	vector<pair<int, int>> vp(n);
	for (int i = 0; i < n; i++) {
		vp[i] = {-a[i], b[i]};
	}
	sort(vp.begin(), vp.end());

	atcoder::segtree<ll, op, e> seg(n);
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		int count = 1;
		while ((i + 1 < n) && (vp[i] == vp[i + 1])) {
			count++;
			i++;
		}
		int bi = vp[i].second;
		answer += count * (count + seg.prod(0, bi + 1));
		seg.set(bi, seg.get(bi) + count);
	}
	cout << answer << endl;
	return 0;
}
