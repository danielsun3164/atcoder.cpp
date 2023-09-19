#include <bits/stdc++.h>
using namespace std;

const static int N = 4;
const static vector<int> DX { -1, 1, 0, 0 };
const static vector<int> DY { 0, 0, -1, 1 };

void dfs(int x, int y, int c, vector<vector<bool>> &used, vector<vector<int>> &cover) {
	used[x][y] = true;
	for (int i = 0; i < N; i++) {
		int nx = x + DX[i], ny = y + DY[i];
		if ((nx < 0) || (nx > 5) || (ny < 0) || (ny > 5) || used[nx][ny] || c != cover[nx][ny]) {
			continue;
		}
		dfs(nx, ny, c, used, cover);
	}
}

int main(void) {
	vector<vector<int>> a(N + 1, vector<int>(N + 1, 0)), cover(N + 2, vector<int>(N + 2, 0));
	vector<vector<bool>> used(N + 2, vector<bool>(N + 2, false));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> a[i][j];
		}
	}
	int n = (1 << (N * N)), answer = 0;
	for (int bit = 1; bit < n; bit++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				cover[i][j] = (bit & (1 << ((i - 1) * N + (j - 1)))) ? 1 : 0;
			}
		}
		bool flag = true;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if ((1 == a[i][j]) && !cover[i][j]) {
					flag = false;
					goto end1;
				}
			}
		}
		end1: ;
		for (int i = 0; i <= N + 1; i++) {
			for (int j = 0; j <= N + 1; j++) {
				used[i][j] = false;
			}
		}
		dfs(0, 0, 0, used, cover);
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (1 == cover[i][j]) {
					dfs(i, j, 1, used, cover);
					goto end2;
				}
			}
		}
		end2: ;
		for (int i = 0; i <= N + 1; i++) {
			for (int j = 0; j <= N + 1; j++) {
				flag &= used[i][j];
			}
		}
		answer += flag ? 1 : 0;
	}
	cout << answer << endl;
	return 0;
}
