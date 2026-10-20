#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	vector<int> out(n, 0);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edges[v - 1].emplace_back(u - 1);
		out[u - 1]++;
	}
	queue<int> que;
	int answer = n;
	for (int i = 0; i < n; i++) {
		if (0 == out[i]) {
			que.push(i);
		}
	}
	while (!que.empty()) {
		answer--;
		int now = que.front();
		que.pop();
		for (int next : edges[now]) {
			out[next]--;
			if (0 == out[next]) {
				que.push(next);
			}
		}
	}
	cout << answer << endl;
	return 0;
}
