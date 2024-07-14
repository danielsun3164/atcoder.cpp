#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

pair<ll, int> f(vector<ll> &b, int value) {
	int n = b.size();
	vector<pair<ll, int>> dp(n + 1, {-INF, 0}), ep(n + 1, {-INF, 0});
	ep[0] = {0, 0};
	for (int i = 0; i < n; i++) {
		dp[i + 1] = {ep[i].first + b[i] - value, ep[i].second + 1};
		ep[i + 1] = max(dp[i], ep[i]);
	}
	return max(dp[n], ep[n]);
}

int main(void) {
	int n, r;
	cin >> n >> r;
	r = min(r, n - r);
	vector<ll> a(n - 1), b(n, 0);
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		b[i] += a[i];
		b[i + 1] += a[i];
	}
	int ok = 0, ng = 1 << 31;
	while (ng > ok + 1) {
		int med = (ok + ng) >> 1;
		if (f(b, med).second >= r) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << (f(b, ok).first + r * ll(ok)) << endl;
	return 0;
}
