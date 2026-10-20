#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1), b(m + 1), c(n + m + 1);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int &ci : c) {
		cin >> ci;
	}
	for (int i = m; i >= 0; i--) {
		for (int j = i + 1; j <= min(m, i + n); j++) {
			c[i + n] -= b[j] * a[i + n - j];
		}
		b[i] = c[i + n] / a[n];
	}
	for (int i = 0; i <= m; i++) {
		cout << (i ? " " : "") << b[i];
	}
	cout << endl;
	return 0;
}
