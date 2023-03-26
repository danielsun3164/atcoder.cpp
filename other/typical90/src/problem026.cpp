#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<int> dist(n, INF), counts(2, 0);
	dist[0] = 0;
	counts[0]++;
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int next : edges[now]) {
			if (dist[next] >= dist[now] + 1) {
				dist[next] = dist[now] + 1;
				counts[dist[next] & 1]++;
				q.push(next);
			}
		}
	}
	int result = (counts[0] >= (n >> 1)) ? 0 : 1;
	vector<int> answer;
	for (int i = 0; i < n; i++) {
		if (result == (1 & dist[i])) {
			answer.emplace_back(i + 1);
			if (int(answer.size()) >= (n >> 1)) {
				break;
			}
		}
	}
	for (int i = 0; i < (n >> 1); i++) {
		cout << (i ? " " : "") << answer[i];
	}
	cout << endl;
	return 0;
}
