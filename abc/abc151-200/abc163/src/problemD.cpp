#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

ll calc(ll n, ll k) {
	return (n * 2 - k + 1) * k / 2 - k * (k + 1) / 2 + 1;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	mint ans = 0;
	for (int i = k; i <= n + 1; i++) {
		ans += calc(n + 1, i);
	}
	cout << ans.val() << endl;
	return 0;
}
