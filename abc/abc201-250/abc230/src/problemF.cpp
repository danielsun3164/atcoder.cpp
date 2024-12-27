#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n), s(n, 0LL);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s[i] = ((i > 0) ? s[i - 1] : 0LL) + a[i];
	}
	map<ll, mint> dp;
	mint sum = 0;
	for (int i = 0; i < n; i++) {
		mint pre = dp[s[i]];
		dp[s[i]] = sum + 1;
		sum += sum + 1 - pre;
	}
	cout << dp[s[n - 1]].val() << endl;
	return 0;
}
