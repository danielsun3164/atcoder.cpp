#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	int m = INT_MAX, ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			m = min(m, a[i][j]);
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			ans += a[i][j] - m;
		}
	}

	cout << ans << endl;
	return 0;
}
