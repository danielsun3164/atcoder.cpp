#include <bits/stdc++.h>
using namespace std;

const static int N = 4;
const static int INF = INT_MAX >> 1;
const static char WALL = '#';
const vector<int> XS = {1, -1, 0, 0};
const vector<int> YS = {0, 0, 1, -1};

int main() {
	int h, w, rs, cs, rt, ct;
	cin >> h >> w >> rs >> cs >> rt >> ct;
	rs--, cs--, rt--, ct--;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	vector<vector<vector<int>>> dp(h, vector<vector<int>>(w, vector<int>(N, INF)));
	fill(dp[rs][cs].begin(), dp[rs][cs].end(), 0);
	deque<pair<int, int>> dque;
	for (int i = 0; i < N; i++) {
		dque.push_back({(rs * w + cs) * N + i, 0});
	}
	while (!dque.empty()) {
		pair<int, int> now = dque.front();
		int d = now.first % N, x = now.first / N / w, y = (now.first / N) % w;
		dque.pop_front();
		if (dp[x][y][d] == now.second) {
			for (int i = 0; i < N; i++) {
				int nx = x + XS[i], ny = y + YS[i], dd = (i == d) ? 0 : 1;
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w) && (WALL != s[nx][ny])) {
					if (dp[nx][ny][i] > dp[x][y][d] + dd) {
						dp[nx][ny][i] = dp[x][y][d] + dd;
						if (i == d) {
							dque.push_front({(nx * w + ny) * N + i, dp[nx][ny][i]});
						} else {
							dque.push_back({(nx * w + ny) * N + i, dp[nx][ny][i]});
						}
					}
				}
			}
		}
	}
	cout << *min_element(dp[rt][ct].begin(), dp[rt][ct].end()) << endl;
	return 0;
}
