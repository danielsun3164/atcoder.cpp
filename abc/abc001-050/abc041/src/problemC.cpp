#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end(), greater<pair<int, int>>());
	for (auto p : a) {
		cout << (p.second + 1) << endl;
	}
	return 0;
}
