#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> c(n), a;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		auto it = lower_bound(a.begin(), a.end(), c[i]);
		if (a.end() == it) {
			a.emplace_back(c[i]);
		} else {
			*it = c[i];
		}
	}
	cout << (n - a.size()) << endl;
	return 0;
}
