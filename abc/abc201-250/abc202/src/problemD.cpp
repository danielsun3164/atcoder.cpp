#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(int a, int b) {
	ll ret = 1LL;
	for (int i = 1; i <= min(a, b); i++) {
		ret *= (a + b + 1) - i;
		ret /= i;
	}
	return ret;
}

string solve(int a, int b, ll k) {
	if (1LL == k) {
		return string(a, 'a') + string(b, 'b');
	}
	ll half = calc(a - 1, b);
	if (k <= half) {
		return "a" + solve(a - 1, b, k);
	} else {
		return "b" + solve(a, b - 1, k - half);
	}
}

int main(void) {
	int a, b;
	ll k;
	cin >> a >> b >> k;
	cout << solve(a, b, k) << endl;
	return 0;
}
