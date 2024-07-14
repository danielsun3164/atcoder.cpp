#include <bits/stdc++.h>
using namespace std;

const vector<int> XS = {1, -1, 0, 0};
const vector<int> YS = {0, 0, 1, -1};
const char BLOCK = '#';
const char START = 's';
const char GOAL = 'g';

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> c(h);
	for (int i = 0; i < h; i++) {
		cin >> c[i];
	}
	int start = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (START == c[i][j]) {
				start = i * w + j;
			}
		}
	}
	vector<bool> visited(h * w, false);
	queue<int> que;
	visited[start] = true;
	que.push(start);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		int x = now / w, y = now % w;
		for (int i = 0; i < int(XS.size()); i++) {
			int nx = x + XS[i], ny = y + YS[i], next = nx * w + ny;
			if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w) && (BLOCK != c[nx][ny])) {
				if (GOAL == c[nx][ny]) {
					cout << "Yes" << endl;
					return 0;
				}
				if (!visited[next]) {
					que.push(next);
					visited[next] = true;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
