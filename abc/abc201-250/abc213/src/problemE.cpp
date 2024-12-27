#include <bits/stdc++.h>
using namespace std;

const char ROAD = '.';
const vector<int> XS = {1, -1, 0, 0};
const vector<int> YS = {0, 0, 1, -1};
const vector<int> XS2 = {2, 2, 2, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2};
const vector<int> YS2 = {1, 0, -1, 2, 1, -1, -2, 2, -2, 2, 1, -1, -2, 1, 0, -1};
const int INF = INT_MAX >> 1;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	vector<vector<int>> dp(h, vector<int>(w, INF));
	dp[0][0] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push({0, 0});
	while (!que.empty()) {
		pair<int, int> now = que.top();
		que.pop();
		int x = now.second / w, y = now.second % w;
		if (now.first == dp[x][y]) {
			for (int i = 0; i < int(XS.size()); i++) {
				int nx = x + XS[i], ny = y + YS[i];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w) && ROAD == s[nx][ny]) {
					if (dp[nx][ny] > dp[x][y]) {
						dp[nx][ny] = dp[x][y];
						que.push({dp[nx][ny], nx * w + ny});
					}
				}
			}
			for (int i = 0; i < int(XS2.size()); i++) {
				int nx = x + XS2[i], ny = y + YS2[i];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w)) {
					if (dp[nx][ny] > dp[x][y] + 1) {
						dp[nx][ny] = dp[x][y] + 1;
						que.push({dp[nx][ny], nx * w + ny});
					}
				}
			}
		}
	}
	cout << dp[h - 1][w - 1] << endl;
	return 0;
}
