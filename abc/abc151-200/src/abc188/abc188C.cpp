#include <bits/stdc++.h>
using namespace std;

int solve(vector<pair<int, int>> a) {
	if (2 == a.size()) {
		return (a[0].first > a[1].first) ? a[1].second : a[0].second;
	}
	vector<pair<int, int>> r(a.size() >> 1);
	for (long unsigned int i = 0; i < (a.size() >> 1); i++) {
		r[i] = (a[i * 2].first > a[i * 2 + 1].first) ? a[i * 2] : a[i * 2 + 1];
	}
	return solve(r);
}

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> a(1 << n);
	for (int i = 0; i < (1 << n); i++) {
		int v;
		cin >> v;
		a[i] = { v, i + 1 };
	}
	cout << solve(a) << endl;
	return 0;
}
