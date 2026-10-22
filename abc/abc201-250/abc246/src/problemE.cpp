#include <bits/stdc++.h>
using namespace std;

const int N = 4;
const int INF = INT_MAX >> 1;
const vector<int> DX{1, 1, -1, -1}, DY{1, -1, 1, -1};
const char EMPTY = '.';

struct Path {
	int x, y, c, d;
};

int main(void) {
	int n, ax, ay, bx, by;
	cin >> n >> ax >> ay >> bx >> by;
	ax--, ay--, bx--, by--;
	vector<string> s(n);
	for (string &si : s) {
		cin >> si;
	}
	vector<vector<vector<int>>> dist(n, vector<vector<int>>(n, vector<int>(N, INF)));
	deque<Path> que;
	for (int i = 0; i < N; i++) {
		dist[ax][ay][i] = 0;
		int nx = ax + DX[i], ny = ay + DY[i];
		if ((nx >= 0) && (nx < n) && (ny >= 0) && (ny < n) && (EMPTY == s[nx][ny])) {
			dist[nx][ny][i] = 1;
			que.push_back({nx, ny, 1, i});
		}
	}
	while (!que.empty()) {
		auto [x, y, c, d] = que.front();
		que.pop_front();
		if ((x == bx) && (y == by)) {
			cout << c << endl;
			return 0;
		}
		if (dist[x][y][d] == c) {
			for (int i = 0; i < N; i++) {
				int nx = x + DX[i], ny = y + DY[i];
				if ((nx >= 0) && (nx < n) && (ny >= 0) && (ny < n) && (EMPTY == s[nx][ny])) {
					int nc = (d != i);
					if (dist[nx][ny][i] > c + nc) {
						dist[nx][ny][i] = c + nc;
						if (nc) {
							que.push_back({nx, ny, c + nc, i});
						} else {
							que.push_front({nx, ny, c, i});
						}
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
