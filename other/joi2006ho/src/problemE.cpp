#include <bits/stdc++.h>
using namespace std;

struct Region {
	int x1, y1, x2, y2;
};

int main() {
	int n, r;
	cin >> n >> r;
	vector<Region> regions(n), v;
	int x_max = 0, x_min = INT_MAX, y_max = 0, y_min = INT_MAX;
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		regions[i] = Region{x1, y1, x2, y2};
		x_max = max(x_max, x2);
		x_min = min(x_min, x1);
		y_max = max(y_max, y2);
		y_min = min(y_min, y1);
	}
	sort(regions.begin(), regions.end(), [](auto a, auto b) { return a.y1 < b.y1; });
	int count = 0;
	int dp[2][x_max - x_min + 1];
	for (int i = 0; i < 2; i++) {
		fill_n(dp[i], x_max - x_min + 1, 0);
	}
	long area = 0L, perimeter = 0L;
	for (int i = y_min; i <= y_max; i++) {
		fill_n(dp[i & 1], x_max - x_min + 1, 0);
		while ((count < n) && regions[count].y1 == i) {
			v.push_back(regions[count++]);
		}
		for (auto it = v.begin(); it != v.end(); it++) {
			if (it->y2 == i) {
				v.erase(it--);
			} else {
				dp[i & 1][it->x1 - x_min]++;
				dp[i & 1][it->x2 - x_min]--;
			}
		}
		for (int j = 1; j < x_max - x_min + 1; j++) {
			dp[i & 1][j] += dp[i & 1][j - 1];
		}
		for (int j = 0; j < x_max - x_min + 1; j++) {
			if (dp[i & 1][j]) {
				// 面積を累加
				area++;
				if ((0 == j) || (0 == dp[i & 1][j - 1])) {
					perimeter++;
				}
				if ((x_max - x_min == j) || (0 == dp[i & 1][j + 1])) {
					perimeter++;
				}
				if (0 == dp[(i - 1) & 1][j]) {
					perimeter++;
				}
			} else {
				if (dp[(i - 1) & 1][j]) {
					perimeter++;
				}
			}
		}
	}
	cout << area << endl;
	if (2 == r) {
		cout << perimeter << endl;
	}
	return 0;
}
