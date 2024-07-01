#include <bits/stdc++.h>
using namespace std;

const static int SEVEN = 7;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> b(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (0 == j) {
				if (0 == i) {
					if (((0 == b[i][j] % SEVEN) && (m > 1)) ||
						(b[i][j] % SEVEN > SEVEN - m + 1)) {
						cout << "No" << endl;
						return 0;
					}
				} else {
					if (b[i][j] != b[i - 1][j] + SEVEN) {
						cout << "No" << endl;
						return 0;
					}
				}
			} else {
				if (b[i][j] != b[i][j - 1] + 1) {
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
