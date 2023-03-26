#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

ll op(ll a, ll b) {
	return max(a, b);
}

ll e() {
	return -INF;
}

int main() {
	int w, n;
	cin >> w >> n;
	vector<int> l(n), r(n);
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i] >> v[i];
	}
	vector<atcoder::segtree<ll, op, e>> segs(2, atcoder::segtree<ll, op, e>(w + 1));
	segs[1].set(0, 0LL);
	for (int i = 0; i < n; i++) {
		segs[0] = segs[1];
		for (int j = l[i]; j <= w; j++) {
			segs[1].set(j, max(segs[0].prod(max(0, j - r[i]), min(w + 1, j - l[i] + 1)) + v[i], segs[0].get(j)));
		}
	}
	cout << ((segs[1].get(w) > 0) ? segs[1].get(w) : -1LL) << endl;
	return 0;
}
