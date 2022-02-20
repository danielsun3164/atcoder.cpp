#include <bits/stdc++.h>
using namespace std;

bool is_ok(int n, int k, vector<vector<int>> &a, int value) {
	vector<vector<int>> s(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s[i + 1][j + 1] = s[i + 1][j] + s[i][j + 1] - s[i][j] + ((a[i][j] > value) ? 1 : 0);
		}
	}
	for (int i = 0; i <= n - k; i++) {
		for (int j = 0; j <= n - k; j++) {
			if (s[i + k][j + k] - s[i + k][j] - s[i][j + k] + s[i][j] <= k * k / 2) {
				return true;
			}
		}
	}
	return false;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> a(n, vector<int>(n));
	int a_max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			a_max = max(a_max, a[i][j]);
		}
	}
	int ok = a_max + 1, ng = -1;
	while (ok > ng + 1) {
		int med = (ok + ng) >> 1;
		if (is_ok(n, k, a, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
