#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

struct path {
	int f, r, c, cost;

	path(int _f, int _r, int _c, int _cost) {
		f = _f;
		r = _r;
		c = _c;
		cost = _cost;
	}
};

struct comparePath {
	bool operator()(path const &a, path const &b) {
		return a.cost < b.cost;
	}
};

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
			if (dist[0][pr][pc] > cost) {
				dist[0][pr][pc] = cost;
				que.emplace(dist[0][pr][pc], 0, pr, pc);
			}
			if ((pr > 0) && (dist[f][pr - 1][pc] > cost + 1)) {
				dist[f][pr - 1][pc] = cost + 1;
				que.emplace(dist[f][pr - 1][pc], f, pr - 1, pc);
			}
		} else {
			if (dist[1][pr][pc] > cost + 1) {
				dist[1][pr][pc] = cost + 1;
				que.emplace(dist[1][pr][pc], 1, pr, pc);
			}
			if ((pc < c - 1) && (dist[0][pr][pc + 1] > cost + a[pr][pc])) {
				dist[0][pr][pc + 1] = cost + a[pr][pc];
				que.emplace(dist[0][pr][pc + 1], 0, pr, pc + 1);
			}
			if ((pc > 0) && (dist[0][pr][pc - 1] > cost + a[pr][pc - 1])) {
				dist[0][pr][pc - 1] = cost + a[pr][pc - 1];
				que.emplace(dist[0][pr][pc - 1], 0, pr, pc - 1);
			}
			if ((pr < r - 1) && (dist[0][pr + 1][pc] > cost + b[pr][pc])) {
				dist[0][pr + 1][pc] = cost + b[pr][pc];
				que.emplace(dist[0][pr + 1][pc], 0, pr + 1, pc);
			}
		}
	}
	cout << dist[0][r - 1][c - 1] << endl;
	return 0;
}
