#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<ll> s(n), t(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	vector<ll> ans = t;
	for (int i = 0; i < 2 * n; i++) {
		ans[(i + 1) % n] = min(ans[(i + 1) % n], ans[i % n] + s[i % n]);
	}
	for (ll ansi : ans) {
		cout << ansi << endl;
	}
	return 0;
}
