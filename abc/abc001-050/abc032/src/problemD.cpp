#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll INF = LONG_MAX >> 1;

const int N = 1'000;

int main(void) {
	int n, W;
	cin >> n >> W;
	vector<int> v(n), w(n);
	int v_max = 0, w_max = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
		v_max = max(v_max, v[i]);
		w_max = max(w_max, w[i]);
	}
	if (w_max <= N) {
		int p = min(w_max * n, W);
		vector<vector<ll>> dp(2, vector<ll>(p + 1, -INF));
		dp[0][0] = 0LL;
		for (int i = 0; i < n; i++) {
			fill(dp[1 & (i + 1)].begin(), dp[1 & (i + 1)].end(), -INF);
			for (int j = 0; j <= p; j++) {
				if (-INF != dp[1 & i][j]) {
					dp[1 & (i + 1)][j] = max(dp[1 & (i + 1)][j], dp[1 & i][j]);
					if (j + w[i] <= p) {
						dp[1 & (i + 1)][j + w[i]] =
							max(dp[1 & (i + 1)][j + w[i]], dp[1 & i][j] + v[i]);
					}
				}
			}
		}
		cout << *max_element(dp[1 & n].begin(), dp[1 & n].end()) << endl;
	} else if (v_max <= N) {
		int p = v_max * n;
		vector<vector<ll>> dp(2, vector<ll>(p + 1, INF));
		dp[0][0] = 0LL;
		for (int i = 0; i < n; i++) {
			fill(dp[1 & (i + 1)].begin(), dp[1 & (i + 1)].end(), INF);
			for (int j = 0; j <= p; j++) {
				if (INF != dp[1 & i][j]) {
					dp[1 & (i + 1)][j] = min(dp[1 & (i + 1)][j], dp[1 & i][j]);
					if (j + v[i] <= p) {
						dp[1 & (i + 1)][j + v[i]] =
							min(dp[1 & (i + 1)][j + v[i]], dp[1 & i][j] + w[i]);
					}
				}
			}
		}
		ll ans = 0;
		for (int i = 0; i <= p; i++) {
			if (dp[1 & n][i] <= W) {
				ans = i;
			}
		}
		cout << ans << endl;
	} else {
		map<int, ll> mp;
		mp[0] = 0L;
		for (int i = 0; i < n; i++) {
			map<int, ll> mp2 = mp;
			for (pair<int, ll> p : mp) {
				if (p.first + w[i] > W) {
					break;
				}
				mp2[p.first + w[i]] = max(mp2[p.first + w[i]], p.second + v[i]);
			}
			mp = move(mp2);
		}
		ll ans = 0LL;
		for (pair<int, ll> p : mp) {
			ans = max(ans, p.second);
		}
		cout << ans << endl;
	}
	return 0;
}
