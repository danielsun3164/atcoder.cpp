#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, m, q;
	cin >> n >> m >> q;
	vector<pair<int, int>> wv(n);
	for (int i = 0; i < n; i++) {
		int w, v;
		cin >> w >> v;
		wv[i] = { w, v };
	}
	sort(wv.begin(), wv.end());
	vector<int> x(m);
	for (int i = 0; i < m; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		l--;
		vector<int> nx;
		for (int j = 0; j < m; j++) {
			if (j < l || j >= r) {
				nx.emplace_back(x[j]);
			}
		}
		sort(nx.begin(), nx.end());
		vector<bool> used(n, false);
		ll ans = 0LL;
		for (int nxi : nx) {
			int idx = -1, max_v = 0;
			for (int j = 0; j < n; j++) {
				if (wv[j].first > nxi) {
					break;
				}
				if (!used[j]) {
					if (wv[j].second > max_v) {
						max_v = wv[j].second;
						idx = j;
					}
				}
			}
			if (idx >= 0) {
				ans += wv[idx].second;
				used[idx] = true;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
