#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;
const vector<int> XS = { 1, -1, 0, 0 };
const vector<int> YS = { 0, 0, 1, -1 };
const char OK = '.';

struct masu {
	int x, y, cost;
};

bool operator<(const masu &m1, const masu &m2) {
	return m2.cost < m1.cost;
}

int main(void) {
	int r, c, sx, sy, gx, gy;
	cin >> r >> c >> sx >> sy >> gx >> gy;
	sx--;
	sy--;
	gx--;
	gy--;
	vector<string> s(r);
	for (int i = 0; i < r; i++) {
		cin >> s[i];
	}
	vector<vector<int>> dp(r, vector<int>(c, INF));
	dp[sx][sy] = 0;
	priority_queue<masu> que;
	que.push( { sx, sy, 0 });
	while (!que.empty()) {
		masu m = que.top();
		que.pop();
		if (dp[m.x][m.y] == m.cost) {
			for (int i = 0; i < int(XS.size()); i++) {
				int nx = m.x + XS[i], ny = m.y + YS[i];
				if ((nx >= 0) && (nx < r) && (ny >= 0) && (ny < c) && (OK == s[nx][ny])) {
					if (dp[nx][ny] > dp[m.x][m.y] + 1) {
						dp[nx][ny] = dp[m.x][m.y] + 1;
						que.push( { nx, ny, dp[nx][ny] });
					}
				}
			}
		}
	}
	cout << dp[gx][gy] << endl;
	return 0;
}
