#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

void dfs(int now, vector<vector<int>> &edges, vector<bool> &visited,
		 vector<pair<mint, mint>> &counts) {
	visited[now] = true;
	for (int next : edges[now]) {
		if (!visited[next]) {
			dfs(next, edges, visited, counts);
			counts[now].first *= counts[next].first + counts[next].second;
			counts[now].second *= counts[next].first;
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	vector<bool> visited(n, false);
	vector<pair<mint, mint>> counts(n, pair(1, 1));
	dfs(0, edges, visited, counts);
	cout << (counts[0].first + counts[0].second).val() << endl;
	return 0;
}
