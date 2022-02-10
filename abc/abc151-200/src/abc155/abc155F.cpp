#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

const int INF = 1'000'000'005;

int dfs(vector<int> &x, vector<vector<pair<int, int>>> &edges, vector<int> &ans, int now, int prev) {
	for (auto e : edges[now]) {
		if (prev != e.first) {
			if (dfs(x, edges, ans, e.first, now)) {
				ans.emplace_back(e.second);
				x[now] ^= 1;
			}
		}
	}
	return x[now];
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> ab(n + 1);
	vector<int> a(n + 1), x(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> ab[i].first >> ab[i].second;
	}
	ab[n].first = INF;
	ab[n].second = 0;
	sort(ab.begin(), ab.end());
	for (int i = 0; i <= n; i++) {
		a[i] = ab[i].first;
		x[i] = (0 == i) ? ab[i].second : ab[i - 1].second ^ ab[i].second;
	}
	vector<vector<pair<int, int>>> edges(n + 1);
	atcoder::dsu d(n + 1);
	for (int i = 1; i <= m; i++) {
		int l, r, li, ri;
		cin >> l >> r;
		li = lower_bound(a.begin(), a.end(), l) - a.begin();
		ri = lower_bound(a.begin(), a.end(), r + 1) - a.begin();
		if (!d.same(li, ri)) {
			d.merge(li, ri);
			edges[li].push_back( { ri, i });
			edges[ri].push_back( { li, i });
		}
	}
	vector<int> cnt(n + 1, 0);
	for (int i = 0; i <= n; i++) {
		cnt[d.leader(i)] += x[i];
	}
	for (int i = 0; i <= n; i++) {
		if (1 & cnt[i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	vector<int> ans;
	for (int i = 0; i <= n; i++) {
		if (i == d.leader(i)) {
			if (dfs(x, edges, ans, i, -1)) {
				ans.emplace_back(i);
				x[i] ^= 1;
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int i = 0; i < int(ans.size()); i++) {
		cout << ans[i] << ((i == int(ans.size()) - 1) ? "" : " ");
	}
	cout << endl;
	return 0;
}
