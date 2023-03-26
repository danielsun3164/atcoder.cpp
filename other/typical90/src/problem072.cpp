#include <bits/stdc++.h>
using namespace std;

const static char MOUNTAIN = '#';
const static int N = 4;
const static vector<int> DX { 1, -1, 0, 0 };
const static vector<int> DY { 0, 0, 1, -1 };

int dfs(int h, int w, vector<string> &c, int sx, int sy, vector<vector<bool>> &visited, int x, int y, int step) {
	int result = -1;
	if (visited[x][y]) {
		if ((sx == x) && (sy == y)) {
			return step;
		} else {
			return result;
		}
	}
	visited[x][y] = true;
	for (int i = 0; i < N; i++) {
		int nx = x + DX[i], ny = y + DY[i];
		if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w) && (MOUNTAIN != c[nx][ny])) {
			result = max(result, dfs(h, w, c, sx, sy, visited, nx, ny, step + 1));
		}
	}
	visited[x][y] = false;
	return result;
}

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> c(h);
	for (int i = 0; i < h; i++) {
		cin >> c[i];
	}
	vector<vector<bool>> visited(h, vector<bool>(w, false));
	int answer = -1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (MOUNTAIN != c[i][j]) {
				answer = max(answer, dfs(h, w, c, i, j, visited, i, j, 0));
			}
		}
	}
	cout << ((answer < N) ? -1 : answer) << endl;
	return 0;
}
