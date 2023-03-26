#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d = 0;
	while (q--) {
		int t, x, y;
		cin >> t >> x >> y;
		x--, y--;
		if (1 == t) {
			swap(a[(x + d) % n], a[(y + d) % n]);
		} else if (2 == t) {
			d--;
			if (d < 0) {
				d += n;
			}
		} else {
			cout << a[(x + d) % n] << endl;
		}
	}
	return 0;
}
