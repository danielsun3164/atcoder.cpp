#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

int main() {
	int h, w, m;
	cin >> h >> w >> m;
	vector<int> mh(w, h), mw(h, w);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		mh[y] = min(mh[y], x);
		mw[x] = min(mw[x], y);
	}
	long ans = 0L;
	for (int i = 0; i < mh[0]; i++) {
		ans += mw[i];
	}
	for (int i = 0; i < mw[0]; i++) {
		ans += mh[i];
	}
	vector<int> t(mw[0]);
	for (int i = 0; i < mw[0]; i++) {
		t[i] = i;
	}
	sort(t.begin(), t.end(), [&mh](int a, int b) {
		return mh[a] < mh[b];
	});
	atcoder::fenwick_tree<int> fw(w + 1);
	for (int ti : t) {
		fw.add(ti, 1);
	}
	int idx = 0;
	for (int i = 0; i < mh[0]; i++) {
		while ((idx < int(t.size())) && (i >= mh[t[idx]])) {
			fw.add(t[idx++], -1);
		}
		ans -= fw.sum(0, mw[i]);
	}
	cout << ans << endl;
	return 0;
}
