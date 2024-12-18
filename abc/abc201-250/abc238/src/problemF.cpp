#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> p(n), q(n), v(n);
	for (int &pi : p) {
		cin >> pi;
	}
	for (int &qi : q) {
		cin >> qi;
	}
	for (int i = 0; i < n; i++) {
		v[p[i] - 1] = q[i] - 1;
	}
	vector<vector<vector<mint>>> dp(2, vector<vector<mint>>(k + 1, vector<mint>(n + 1, 0)));
	dp[0][0][n] = 1;
	for (int i = 0; i < n; i++) {
		for (int x = 0; x <= k; x++) {
			for (int y = 0; y <= n; y++) {
				dp[(i + 1) & 1][x][y] = 0;
			}
		}
		for (int x = 0; x <= k; x++) {
			for (int y = 0; y <= n; y++) {
				if ((x < k) && (v[i] < y)) {
					dp[(i + 1) & 1][x + 1][y] += dp[i & 1][x][y];
				}
				dp[(i + 1) & 1][x][min(y, v[i])] += dp[i & 1][x][y];
			}
		}
	}
	mint answer = 0;
	for (mint &nx : dp[n & 1][k]) {
		answer += nx;
	}
	cout << answer.val() << endl;
	return 0;
}
