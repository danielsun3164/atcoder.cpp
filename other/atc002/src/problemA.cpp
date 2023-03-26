#include <bits/stdc++.h>
using namespace std;

const vector<int> XS = { 1, -1, 0, 0 };
const vector<int> YS = { 0, 0, 1, -1 };
const char BLOCK = '#';
const int INF = INT_MAX >> 1;

int main() {
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
	int start = sx * c + sy;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push( { 0, start });
	while (!que.empty()) {
		pair<int, int> now = que.top();
		que.pop();
		int x = now.second / c, y = now.second % c;
		if ((gx == x) && (gy == y)) {
			cout << now.first << endl;
			break;
		}
		for (int i = 0; i < int(XS.size()); i++) {
			int nx = x + XS[i], ny = y + YS[i], next = nx * c + ny;
			if ((nx >= 0) && (nx < r) && (ny >= 0) && (ny < c) && (BLOCK != s[nx][ny])) {
				if (dp[nx][ny] > now.first + 1) {
					dp[nx][ny] = now.first + 1;
					que.push( { dp[nx][ny], next });
				}
			}
		}
	}
	return 0;
}
