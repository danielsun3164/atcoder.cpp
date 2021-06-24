#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	ll ans = 0LL;
	for (pair<int, int> p : m) {
		ans += (n - p.second) * ll(p.second);
	}
	cout << (ans >> 1) << endl;
	return 0;
}
