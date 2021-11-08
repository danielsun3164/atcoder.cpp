#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

void check(
		priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> &que,
		vector<vector<vector<int>>> &dist, int f, int r, int c, int cost) {
	if (dist[f][r][c] > cost) {
		dist[f][r][c] = cost;
		que.emplace(cost, f, r, c);
	}
}

int main() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> a(r, vector<int>(c - 1)), b(r - 1, vector<int>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c - 1; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < r - 1; i++) {
		for (int j = 0; j < c; j++) {
			cin >> b[i][j];
		}
	}
	vector<vector<vector<int>>> dist(2, vector<vector<int>>(r, vector<int>(c, INF)));
	dist[0][0][0] = 0;
	priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> que;
	que.emplace(0, 0, 0, 0);
	while (!que.empty()) {
		auto [cost, f, pr, pc] = que.top();
		que.pop();
		if (f) {
			check(que, dist, 0, pr, pc, cost);
			if (pr > 0) {
				check(que, dist, f, pr - 1, pc, cost + 1);
			}
		} else {
			check(que, dist, 1, pr, pc, cost + 1);
			if (pc < c - 1) {
				check(que, dist, 0, pr, pc + 1, cost + a[pr][pc]);
			}
			if (pc > 0) {
				check(que, dist, 0, pr, pc - 1, cost + a[pr][pc - 1]);
			}
			if (pr < r - 1) {
				check(que, dist, 0, pr + 1, pc, cost + b[pr][pc]);
			}
		}
	}
	cout << dist[0][r - 1][c - 1] << endl;
	return 0;
}
