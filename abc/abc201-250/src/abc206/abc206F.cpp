#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int grundy(int l, int r, vector<pair<int, int>> &v, vector<vector<int>> &dp) {
	if (l >= r) {
		return 0;
	}
	if (-1 != dp[l][r]) {
		return dp[l][r];
	}
	vector<bool> kh(N, false);
	for (pair<int, int> p : v) {
		if ((l <= p.first) && (p.second <= r)) {
			kh[grundy(l, p.first, v, dp) ^ grundy(p.second, r, v, dp)] = true;
		}
	}
	for (int i = 0;; i++) {
		if (!kh[i]) {
			dp[l][r] = i;
			break;
		}
	}
	return dp[l][r];
}

int main() {
	int t;
	cin >> t;
	while (t) {
		t--;
		int n;
		cin >> n;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
			v[i].first--;
			v[i].second--;
		}
		vector<vector<int>> dp(N, vector<int>(N, -1));
		cout << (grundy(0, N - 1, v, dp) ? "Alice" : "Bob") << endl;
	}
	return 0;
}
