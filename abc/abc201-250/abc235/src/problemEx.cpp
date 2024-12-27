#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/dsu>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

void merge(dsu &d, vector<vector<mint>> &dp, int i, int j, int k) {
	int pi = d.leader(i), pj = d.leader(j);
	d.merge(i, j);
	int pk = d.leader(i);
	dp[pk] = convolution(dp[pi], dp[pj]);
	while (int(dp[pk].size()) > k + 1) {
		dp[pk].pop_back();
	}
}

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	map<int, vector<pair<int, int>>> mp;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		mp[c].push_back({a - 1, b - 1});
	}
	dsu d(n);
	vector<vector<mint>> dp(n, {1, 1});
	for (auto [_, v] : mp) {
		vector<int> vers;
		for (auto [a, b] : v) {
			if (!d.same(a, b)) {
				merge(d, dp, a, b, k);
				vers.emplace_back(a);
			}
		}
		map<int, int> count;
		for (int x : vers) {
			count[d.leader(x)]++;
		}
		for (auto [x, y] : count) {
			int pos = d.leader(x);
			dp[pos][1]++;
			if (int(dp[pos].size()) >= y + 2) {
				dp[pos][y + 1]--;
			}
		}
	}
	vector<mint> end = {1};
	set<int> st;
	for (int i = 0; i < n; i++) {
		st.insert(d.leader(i));
	}
	for (int x : st) {
		end = convolution(end, dp[x]);
		while (int(end.size()) > k + 1) {
			end.pop_back();
		}
	}
	cout << accumulate(end.begin(), end.end(), mint(0)).val() << endl;
	return 0;
}
