#include <bits/stdc++.h>
using namespace std;

const vector<int> XS = { -1, 1, 0, 0 };
const vector<int> YS = { 0, 0, -1, 1 };
const char ROAD = '.';
const int INF = INT_MAX >> 1;

vector<vector<int>> dijkstra(int h, int w, vector<string> &s, int x, int y) {
	vector<vector<int>> dp(h, vector<int>(w, INF));
	if (ROAD == s[x][y]) {
		dp[x][y] = 0;
		queue<pair<int, int>> q;
		q.push( { x, y });
		while (!q.empty()) {
			int cx, cy;
			tie(cx, cy) = q.front();
			q.pop();
			for (int i = 0; i < int(XS.size()); i++) {
				int nx = cx + XS[i], ny = cy + YS[i];
				if ((0 <= nx) && (nx < h) && (0 <= ny) && (ny < w) && (ROAD == s[nx][ny])
						&& (dp[nx][ny] > dp[cx][cy] + 1)) {
					dp[nx][ny] = dp[cx][cy] + 1;
					q.push( { nx, ny });
				}
			}
		}
	}
	return dp;
}

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			vector<vector<int>> dp = dijkstra(h, w, s, i, j);
			for (vector<int> row : dp) {
				for (int v : row) {
					if (v != INF) {
						ans = max(ans, v);
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
