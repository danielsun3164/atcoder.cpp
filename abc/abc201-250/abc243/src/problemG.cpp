#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 100'001;

ll isqrt(ll n) {
	ll result = sqrt(n) - 1;
	while (result + 1 <= n / (result + 1)) {
		result++;
	}
	return result;
}

int main(void) {
	vector<ll> dp(N), dp_sum1(N), dp_sum2(N);
	dp[1] = dp_sum1[1] = 1LL;
	for (ll i = 2; i < N; i++) {
		dp[i] = dp_sum1[isqrt(i)];
		dp_sum1[i] = dp_sum1[i - 1] + dp[i];
		dp_sum2[i] = dp_sum2[i - 1] + dp[i] * (i * i - 1);
	}

	int t;
	cin >> t;
	while (t--) {
		ll x;
		cin >> x;
		ll x2 = isqrt(x), x4 = isqrt(x2);
		cout << (x2 * dp_sum1[x4] - dp_sum2[x4]) << endl;
	}
	return 0;
}
