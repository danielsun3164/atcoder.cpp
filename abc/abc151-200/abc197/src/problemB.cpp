#include <bits/stdc++.h>
using namespace std;

const char OBSTACLE = '#';

int main(void) {
	int h, w, x, y;
	cin >> h >> w >> x >> y;
	x--;
	y--;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	int ans = 1;
	for (int i = y - 1; (i >= 0) && (OBSTACLE != s[x][i]); i--) {
		ans++;
	}
	for (int i = y + 1; (i < w) && (OBSTACLE != s[x][i]); i++) {
		ans++;
	}
	for (int i = x - 1; (i >= 0) && (OBSTACLE != s[i][y]); i--) {
		ans++;
	}
	for (int i = x + 1; (i < h) && (OBSTACLE != s[i][y]); i++) {
		ans++;
	}
	cout << ans << endl;
	return 0;
}
