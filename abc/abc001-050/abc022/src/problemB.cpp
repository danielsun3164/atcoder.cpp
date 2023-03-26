#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	int ans = 0;
	for (pair<int, int> p : m) {
		ans += p.second - 1;
	}
	cout << ans << endl;
	return 0;
}
