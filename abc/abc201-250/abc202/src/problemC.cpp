#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	map<int, int> am, cm;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		am[a]++;
	}
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		cm[c]++;
	}
	ll ans = 0LL;
	for (int i = 0; i < n; i++) {
		ans += am[b[i]] * (ll) cm[i + 1];
	}
	cout << ans << endl;
	return 0;
}
