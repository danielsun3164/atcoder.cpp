#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	vector<int> r(n), c(n), a(n);
	map<int, vector<int>, greater<int>> mp;
	for (int i = 0; i < n; i++) {
		cin >> r[i] >> c[i] >> a[i];
		mp[a[i]].emplace_back(i);
	}
	map<int, int> r_max, c_max;
	vector<int> answers(n);
	for (auto [ai, v] : mp) {
		for (int i : v) {
			answers[i] = max(r_max[r[i]], c_max[c[i]]);
		}
		for (int i : v) {
			r_max[r[i]] = max(r_max[r[i]], answers[i] + 1);
			c_max[c[i]] = max(c_max[c[i]], answers[i] + 1);
		}
	}
	for (int ai : answers) {
		cout << ai << endl;
	}
	return 0;
}
