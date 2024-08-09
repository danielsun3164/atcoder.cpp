#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

map<ll, mint> dp;

mint solve(ll n) {
	if (dp.contains(n)) {
		return dp[n];
	}
	if (0LL == n) {
		return dp[n] = 1;
	}
	if (1LL == n) {
		return dp[n] = 2;
	}
	mint result = 0;
	result += solve((n - 2) >> 1);
	result += solve((n - 1) >> 1);
	result += solve(n >> 1);
	return dp[n] = result;
}

int main(void) {
	ll n;
	cin >> n;
	cout << solve(n).val() << endl;
	return 0;
}
