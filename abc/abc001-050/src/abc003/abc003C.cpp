#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> r(n);
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}
	sort(r.begin(), r.end());
	double c = 0.0;
	for (int i = n - k; i < n; i++) {
		c = (c + r[i]) / 2.0;
	}
	cout << fixed << c << endl;
	return 0;
}
