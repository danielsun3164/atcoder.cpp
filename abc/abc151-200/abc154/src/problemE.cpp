#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	string n;
	int k;
	cin >> n >> k;
	int l = n.length();
	vector<vector<vector<ll>>> dp(l + 1, vector<vector<ll>>(2, vector<ll>(k + 2, 0LL)));
	dp[0][0][0] = 1LL;
	for (int i = 0; i < l; i++) {
		int d = n[i] - '0';
		for (int less = 0; less < 2; less++) {
			for (int j = 0; j <= k; j++) {
				for (int nxt = 0; nxt < 10; nxt++) {
					if ((d >= nxt) || (1 == less)) {
						dp[i + 1][(nxt < d) ? 1 : less][(0 != nxt) ? j + 1 : j] += dp[i][less][j];
					}
				}
			}
		}
	}
	cout << (dp[l][0][k] + dp[l][1][k]) << endl;
	return 0;
}
