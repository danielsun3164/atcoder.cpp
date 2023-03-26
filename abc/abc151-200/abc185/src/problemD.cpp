#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(m + 2), d(m + 1);
	a[0] = 0;
	a[m + 1] = n + 1;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	if (n == m) {
		cout << 0 << endl;
		return 0;
	}
	sort(a.begin(), a.end());
	int min = INT_MAX;
	for (int i = 0; i < m + 1; i++) {
		d[i] = a[i + 1] - a[i] - 1;
		if ((d[i] != 0) && (min > d[i])) {
			min = d[i];
		}
	}
	int r = 0;
	for (int di : d) {
		r += (di + min - 1) / min;
	}
	cout << r << endl;
	return 0;
}
