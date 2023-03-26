#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += (a[i] *= 4 * m);
	}
	int avg = s / 4 / m, count = 0;
	for (int i = 0; i < n; i++) {
		count += (a[i] >= avg) ? 1 : 0;
	}
	cout << ((count >= m) ? "Yes" : "No") << endl;
	return 0;
}
