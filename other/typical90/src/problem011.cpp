#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 5001;

int main() {
	int n;
	cin >> n;
	vector<tuple<int, int, ll>> v;
	for (int i = 0; i < n; i++) {
		int d, c;
		ll s;
		cin >> d >> c >> s;
		v.emplace_back(make_tuple(d, c, s));  // @suppress("Invalid arguments")
	}
	sort(v.begin(), v.end(), [](auto a, auto b) { return get<0>(a) < get<0>(b); });
	vector<vector<ll>> dp(n + 1, vector<ll>(N, 0LL));
	for (int i = 0; i < n; i++) {
		int d, c;
		ll s;
		tie(d, c, s) = v[i];
		for (int j = 0; j <= N; j++) {
			dp[i + 1][j] = dp[i][j];
			if ((j >= c) && (j <= d)) {
				dp[i + 1][j] = max(dp[i][j], dp[i][j - c] + s);
			}
		}
	}
	cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
	return 0;
}
