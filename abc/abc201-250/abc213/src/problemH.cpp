#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> sub_vec(vector<mint> &v, int l, int r) {
	return {begin(v) + l, begin(v) + r};
}

void online_convolution(vector<int> &a, vector<int> &b, vector<vector<mint>> &p,
						vector<vector<mint>> &dp, int l, int r) {
	if (l + 1 >= r) {
		return;
	}
	int n = int(a.size()), m = (l + r) >> 1;
	online_convolution(a, b, p, dp, l, m);
	for (int i = 0; i < n; i++) {
		vector<mint> da = sub_vec(dp[a[i]], l, m);
		vector<mint> pab = sub_vec(p[i], 0, r - l);
		vector<mint> ra = atcoder::convolution(da, pab);
		for (int j = m; j < r; j++) {
			dp[b[i]][j] += ra[j - l];
		}
		vector<mint> db = sub_vec(dp[b[i]], l, m);
		vector<mint> rb = atcoder::convolution(db, pab);
		for (int j = m; j < r; j++) {
			dp[a[i]][j] += rb[j - l];
		}
	}
	online_convolution(a, b, p, dp, m, r);
}

int main(void) {
	int n, m, t;
	cin >> n >> m >> t;
	vector<int> a(m), b(m);
	vector<vector<mint>> p(m, vector<mint>(t + 1, 0));
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
		for (int j = 1; j <= t; j++) {
			int x;
			cin >> x;
			p[i][j] = x;
		}
	}
	vector<vector<mint>> dp(n, vector<mint>(t + 1, 0));
	dp[0][0] = 1;
	online_convolution(a, b, p, dp, 0, t + 1);
	cout << dp[0][t].val() << endl;
	return 0;
}
