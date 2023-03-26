#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> g(n);
	vector<bool> used(n, false);
	queue<int> que;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].emplace_back(i);
		if (a != b) {
			g[b].emplace_back(i);
		}
		if ((i == a) || (i == b)) {
			used[i] = true;
			que.push(i);
		}
	}
	vector<int> answer;
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		answer.emplace_back(now + 1);
		for (int next : g[now]) {
			if (!used[next]) {
				used[next] = true;
				que.push(next);
			}
		}
	}
	if (int(answer.size()) == n) {
		for (int i = n - 1; i >= 0; i--) {
			cout << answer[i] << endl;
		}
	} else {
		cout << -1 << endl;
	}
	return 0;
}
