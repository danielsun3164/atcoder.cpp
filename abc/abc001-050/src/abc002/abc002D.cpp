#include <bits/stdc++.h>
using namespace std;

bool ok(int n, vector<vector<bool>> &b, int i) {
	for (int j = 0; j < n; j++) {
		if ((i & (1 << j)) > 0) {
			for (int k = j + 1; k < n; k++) {
				if ((i & (1 << k)) > 0) {
					if (!b[j][k]) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

int main(void) {
	int n, m, ans = 1;
	cin >> n >> m;
	vector<vector<bool>> b(n, vector<bool>(n, false));
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		b[x][y] = b[y][x] = true;
	}
	for (int i = 2; i < (1 << n); i++) {
		int count = bitset<12>(i).count();
		if ((count > ans) && ok(n, b, i)) {
			ans = count;
		}
	}
	cout << ans << endl;
	return 0;
}
