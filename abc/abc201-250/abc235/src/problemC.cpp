#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, q;
	cin >> n >> q;
	map<int, vector<int>> mp;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mp[a].emplace_back(i);
	}
	while (q--) {
		int x, k;
		cin >> x >> k;
		if (int(mp[x].size()) < k) {
			cout << -1 << endl;
		} else {
			cout << (mp[x][k - 1] + 1) << endl;
		}
	}
	return 0;
}
