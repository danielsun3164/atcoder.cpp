#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(vector<vector<pair<int, int>>> &rules, int n, int mask) {
	vector<int> tot(n + 1, 0);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (1 & (mask >> i)) {
			tot[i + 1]++;
			cnt++;
		}
		tot[i + 1] += tot[i];
	}
	for (auto rule : rules[cnt]) {
		if (rule.second < tot[rule.first]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> rules(n + 1);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		rules[x].emplace_back(make_pair(y, z));
	}
	vector<ll> dp(1 << n);
	dp[0] = 1LL;
	for (int mask = 0; mask < (1 << n) - 1; mask++) {
		for (int next = 0; next < n; next++) {
			if (!(mask & (1 << next))) {
				if (check(rules, n, mask + (1 << next))) {
					dp[mask + (1 << next)] += dp[mask];
				}
			}
		}
	}
	cout << dp[(1 << n) - 1] << endl;
	return 0;
}
