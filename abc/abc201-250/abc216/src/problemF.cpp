#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i].second;
	}
	sort(v.begin(), v.end());
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		tie(a[i], b[i]) = v[i];
	}
	int maxA = a.back();
	vector<vector<mint>> dp(n + 1, vector<mint>(maxA + 1, 0));
	dp[0][0] = 1;
	mint answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= maxA; j++) {
			dp[i + 1][j] = dp[i][j];
			if (b[i] <= j) {
				dp[i + 1][j] += dp[i][j - b[i]];
			}
			if (j <= a[i] - b[i]) {
				answer += dp[i][j];
			}
		}
	}
	cout << answer.val() << endl;
	return 0;
}
