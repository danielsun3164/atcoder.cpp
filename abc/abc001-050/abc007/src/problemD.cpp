#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll l) {
	string s = to_string(l);
	vector<ll> dp(s.size() + 1, 0LL);
	bool ok = true;
	for (int i = 0; i < int(s.size()); i++) {
		int digit = s[i] - '0';
		dp[i + 1] = dp[i] * 8;
		if (ok) {
			dp[i + 1] += (digit > 4) ? digit - 1 : digit;
		}
		if ((4 == digit) || (9 == digit)) {
			ok = false;
		}
	}
	return l + 1 - dp[s.size()] - (ok ? 1 : 0);
}

int main(void) {
	ll a, b;
	cin >> a >> b;
	cout << calc(b) - calc(a - 1) << endl;
	return 0;
}
