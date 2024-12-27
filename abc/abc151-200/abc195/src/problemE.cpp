#include <bits/stdc++.h>
using namespace std;

static const int N = 7;
static const char AOKI = 'A';

int main(void) {
	int n;
	string s, t;
	cin >> n >> s >> t;
	vector<int> is(n);
	for (int i = 0; i < n; i++) {
		is[i] = s[i] - '0';
	}
	vector<set<int>> dp(n + 1);
	dp[n].insert(0);
	for (int i = n - 1; i >= 0; i--) {
		for (int r = 0; r < N; r++) {
			if (AOKI == t[i]) {
				if ((dp[i + 1].end() != dp[i + 1].find(10 * r % N)) &&
					(dp[i + 1].end() != dp[i + 1].find((10 * r + is[i]) % N))) {
					dp[i].insert(r);
				}
			} else {
				if ((dp[i + 1].end() != dp[i + 1].find(10 * r % N)) ||
					(dp[i + 1].end() != dp[i + 1].find((10 * r + is[i]) % N))) {
					dp[i].insert(r);
				}
			}
		}
	}
	cout << ((dp[0].end() != dp[0].find(0)) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
