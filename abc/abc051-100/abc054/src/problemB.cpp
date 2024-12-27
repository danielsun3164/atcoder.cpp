#include <bits/stdc++.h>
using namespace std;

bool same(vector<string> &a, vector<string> &b, int m, int x, int y) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (a[x + i][y + j] != b[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<string> a(n), b(m);
	for (string &ai : a) {
		cin >> ai;
	}
	for (string &bi : b) {
		cin >> bi;
	}
	for (int i = 0; i <= n - m; i++) {
		for (int j = 0; j <= n - m; j++) {
			if (same(a, b, m, i, j)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
