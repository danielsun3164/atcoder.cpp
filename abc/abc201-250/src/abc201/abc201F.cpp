#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

ll op(ll a, ll b) {
	return min(a, b);
}

ll e() {
	return INF;
}

int main() {
	int n;
	cin >> n;
	vector<int> pos(n + 1);
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		pos[p] = i + 1;
	}
	vector<ll> aSum(n + 1), bSum(n + 1), cSum(n + 1), dp(n + 1, INF);
	aSum[0] = bSum[0] = cSum[0] = 0LL;
	for (int i = 0; i < n; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		aSum[i + 1] = aSum[i] + a;
		bSum[i + 1] = bSum[i] + min(b, a);
		cSum[i + 1] = cSum[i] + min(c, a);
	}
	atcoder::segtree<ll, op, e> seg(n + 1);
	ll ans = INF;
	for (int i = 1; i <= n; i++) {
		dp[i] = min(bSum[i - 1], seg.prod(0, pos[i]) + aSum[i - 1]);
		ans = min(ans, dp[i] + cSum[n] - cSum[i]);
		seg.set(pos[i], dp[i] - aSum[i]);
	}
	cout << ans << endl;
	return 0;
}
