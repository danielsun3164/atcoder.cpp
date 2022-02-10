#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int txa, tya, txb, tyb, t, v, n;
	cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		if (hypot(x[i] - txa, y[i] - tya) + hypot(x[i] - txb, y[i] - tyb) <= t * v) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
