#include <bits/stdc++.h>
using namespace std;

const static int N = 3;
const static int BLANK = 0;
const static int BLACK = 1;

bool dfs(int now, vector<vector<int>> &edges, vector<int> &color) {
	for (int next : edges[now]) {
		if (BLANK == color[next]) {
			color[next] = N - color[now];
			if (!dfs(next, edges, color)) {
				return false;
			}
		} else if (color[next] == color[now]) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> color(n, BLANK);
	for (int i = 0; i < n; i++) {
		if (BLANK == color[i]) {
			color[i] = BLACK;
			if (!dfs(i, edges, color)) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
