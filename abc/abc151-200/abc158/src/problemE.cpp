#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, p;
	string s;
	cin >> n >> p >> s;
	vector<int> is(n);
	for (int i = 0; i < n; i++) {
		is[i] = s[i] - '0';
	}
	ll ans = 0LL;
	if ((2 == p) || (5 == p)) {
		for (int i = 0; i < n; i++) {
			if (0 == is[i] % p) {
				ans += (i + 1);
			}
		}
	} else {
		vector<int> m(p, 0);
		m[0] = 1;
		int now = 0, digit = 1;
		for (int i = n - 1; i >= 0; i--) {
			now = (now + is[i] * digit) % p;
			ans += m[now];
			m[now]++;
			digit = digit * 10 % p;
		}
	}
	cout << ans << endl;
	return 0;
}
