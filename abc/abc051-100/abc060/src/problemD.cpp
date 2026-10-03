#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int N;
	ll W;
	cin >> N >> W;
	vector<ll> w(N), v(N);
	for (int i = 0; i < N; i++) {
		cin >> w[i] >> v[i];
	}
	vector<map<ll, ll>> dp(2);
	dp[0][0] = 0;
	for (int i = 0; i < N; i++) {
		dp[(i + 1) & 1] = dp[i & 1];
		for (auto [nw, nv] : dp[i & 1]) {
			if (nw + w[i] <= W) {
				dp[(i + 1) & 1][nw + w[i]] = max(dp[(i + 1) & 1][nw + w[i]], nv + v[i]);
			}
		}
	}
	ll answer = 0;
	for (auto [_, nv] : dp[N & 1]) {
		answer = max(answer, nv);
	}
	cout << answer << endl;
	return 0;
}
