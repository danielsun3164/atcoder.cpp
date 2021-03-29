#include <bits/stdc++.h>
using namespace std;

int calc(int r, int c, vector<vector<int>> a, int bit) {
	for (int i = 0; i < r; i++) {
		if (bit & (1 << i)) {
			for (int j = 0; j < c; j++) {
				a[i][j] = 1 - a[i][j];
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < c; i++) {
		int count = 0;
		for (int j = 0; j < r; j++) {
			count += a[j][i];
		}
		ans += max(count, r - count);
	}
	return ans;
}

int main() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> a(r, vector<int>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < (1 << r); i++) {
		ans = max(ans, calc(r, c, a, i));
	}
	cout << ans << endl;
	return 0;
}
