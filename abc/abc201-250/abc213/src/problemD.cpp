#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void dfs(vector<priority_queue<int, vector<int>, greater<int>>> &edges, int now, int prev) {
	ans.emplace_back(now);
	if (!edges[now].empty()) {
		while (!edges[now].empty()) {
			int next = edges[now].top();
			edges[now].pop();
			if (next != prev) {
				dfs(edges, next, now);
				ans.emplace_back(now);
			}
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	vector<priority_queue<int, vector<int>, greater<int>>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].push(b);
		edges[b].push(a);
	}
	dfs(edges, 0, 0);
	for (int i = 0; i < int(ans.size()); i++) {
		cout << (i ? " " : "") << (ans[i] + 1);
	}
	cout << endl;
	return 0;
}
