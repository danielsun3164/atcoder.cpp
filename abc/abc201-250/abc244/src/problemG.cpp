#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edges;
vector<int> answer;
vector<bool> ss, used;

void dfs(int now) {
	used[now] = true;
	answer.emplace_back(now);
	ss[now] = !ss[now];
	for (int next : edges[now]) {
		if (used[next]) {
			continue;
		}
		dfs(next);
		answer.emplace_back(now);
		ss[now] = !ss[now];
		if (ss[next]) {
			answer.emplace_back(next);
			ss[next] = !ss[next];
			answer.emplace_back(now);
			ss[now] = !ss[now];
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	edges.resize(n + 1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	string s;
	cin >> s;
	ss.resize(n + 1, false);
	used.resize(n + 1, false);
	for (int i = 0; i < n; i++) {
		ss[i + 1] = (s[i] == '1');
	}
	dfs(1);
	if (ss[1]) {
		answer.emplace_back(edges[1][0]);
		answer.emplace_back(1);
		answer.emplace_back(edges[1][0]);
	}
	cout << answer.size() << endl;
	for (int i = 0; i < int(answer.size()); i++) {
		cout << (i ? " " : "") << answer[i];
	}
	cout << endl;
	return 0;
}
