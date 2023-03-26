#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const int N = 5;
const int M = 25;

bool is_ok(int i, int j) {
	bool x = 0 == j % N || 4 == j % N || ((i >> (j - 1)) & 1) == ((i >> (j + 1)) & 1);
	bool y = 0 == j / N || 4 == j / N || ((i >> (j - N)) & 1) == ((i >> (j + N)) & 1);
	return 0 == ((i >> j) & 1) && x && y;
}

int main(void) {
	vector<int> y(M + 1, -1);
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		if (0 != x) {
			y[x] = i;
		}
	}
	int u = 1 << M;
	vector<mint> dp(u, 0);
	dp[0] = 1;
	for (int i = 0; i < u - 1; i++) {
		if (0 != dp[i]) {
			int n = __builtin_popcount(i) + 1;
			if (-1 != y[n]) {
				if (is_ok(i, y[n])) {
					dp[i | (1 << y[n])] += dp[i];
				}
			} else {
				for (int j = 0; j < M; j++) {
					if (is_ok(i, j)) {
						dp[i | (1 << j)] += dp[i];
					}
				}
			}
		}
	}
	cout << dp[u - 1].val() << endl;
	return 0;
}
