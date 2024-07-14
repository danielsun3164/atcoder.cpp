#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

vector<mint> polynomial_inverse(vector<mint> &c, int l) {
	int n = c.size();
	vector<mint> a = {1, 0};
	int level = 0;
	while ((1 << level) < l) {
		int cs = min(2 << level, n);
		vector<mint> p = convolution(
			a, vector<mint>(c.begin(), c.begin() + cs));  // @suppress("Symbol is not resolved")
		vector<mint> q(2 << level);
		q[0] = 1;
		for (int j = (1 << level); j < (2 << level); j++) {
			q[j] = -p[j];
		}
		a = convolution(a, q);
		a.resize(4 << level);
		level++;
	}
	a.resize(l);
	return a;
}

int main() {
	ll n;
	int k;
	cin >> n >> k;
	vector<vector<mint>> dp(k + 1);
	dp[k] = {1, 1, 1};
	for (int i = k - 1; i >= 1; i--) {
		int limit = min(ll(k / i), n);
		vector<mint> c(dp[i + 1].size());
		c[0] = 1;
		for (int j = 1; j < int(dp[i + 1].size()); j++) {
			c[j] = -dp[i + 1][j];
		}
		dp[i] = polynomial_inverse(c, limit + 2);
	}
	int s = min(ll(k), n);
	vector<ll> track = {n + s + 1};
	while (track.back() >= s + 1) {
		track.emplace_back(track.back() >> 1);
	}
	reverse(track.begin(), track.end());
	vector<mint> cl(s + 2);
	cl[0] = 1;
	for (int i = 1; i < s + 2; i++) {
		cl[i] = -dp[1][i];
	}
	vector<mint> gl = polynomial_inverse(cl, s + 2);
	reverse(cl.begin(), cl.end());
	vector<mint> poly(s + 1, 0);
	poly[track[0]] = 1;
	for (int i = 1; i < int(track.size()); i++) {
		poly = convolution(poly, poly);
		if (track[i] & 1LL) {
			poly.insert(poly.begin(), 0);
		} else {
			poly.emplace_back(0);
		}
		vector<mint> p1(poly.begin() + (s + 1), poly.end());
		reverse(p1.begin(), p1.end());
		vector<mint> p2 = convolution(p1, gl);
		p2.resize(s + 1);
		reverse(p2.begin(), p2.end());
		vector<mint> p3 = convolution(p2, cl);
		for (int j = 0; j < 2 * s + 1; j++) {
			poly[j] -= p3[j];
		}
		poly.resize(s + 1);
	}
	cout << poly[s].val() << endl;
	return 0;
}
