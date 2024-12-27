#include <bits/stdc++.h>
using namespace std;

const static char WALL = '#';
const static int INF = INT_MAX >> 1;
const static vector<int> DY = {0, 0, -1, 1};
const static vector<int> DX = {-1, 1, 0, 0};

int main() {
	int r, c, sy, sx, gy, gx;
	cin >> r >> c >> sy >> sx >> gy >> gx;
	sy--, sx--, gy--, gx--;
	vector<string> s(r);
	for (string &si : s) {
		cin >> si;
	}
	vector<vector<int>> dp(r, vector<int>(c, INF));
	dp[sy][sx] = 0;
	queue<pair<int, int>> que;
	que.push({sy, sx});
	while (!que.empty()) {
		auto [y, x] = que.front();
		que.pop();
		for (int i = 0; i < int(DX.size()); i++) {
			int ny = y + DY[i], nx = x + DX[i];
			if ((ny >= 0) && (ny < r) && (nx >= 0) && (nx < c) && (WALL != s[ny][nx]) &&
				(dp[ny][nx] > dp[y][x] + 1)) {
				dp[ny][nx] = dp[y][x] + 1;
				que.push({ny, nx});
			}
		}
	}
	cout << dp[gy][gx] << endl;
	return 0;
}
