#include <bits/stdc++.h>
using namespace std;

pair<int, int> tsurukame(int n, int m) {
	if ((m >= 2 * n) && (m <= 4 * n) && (0 == (1 & m))) {
		int c = (m - 2 * n) / 2;
		return make_pair(n - c, c);
	}
	return make_pair(-1, -1);
}

int main(void) {
	int n, m;
	cin >> n >> m;
	int a, b, c;
	for (b = 0; b <= m / n; b++) {
		tie(a, c) = tsurukame(n - b, m - 3 * b);
		if ((a >= 0) && (c >= 0)) {
			cout << a << " " << b << " " << c << endl;
			return 0;
		}
	}
	cout << "-1 -1 -1" << endl;
	return 0;
}
