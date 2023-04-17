#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

const int INF = INT_MAX >> 1;

int dijkstra(vector<set<int>> &edges) {
	int n = edges.size();
	vector<int> d(n, INF);
	d[0] = 0;
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int next : edges[now]) {
			if (d[next] > d[now] + 1) {
				d[next] = d[now] + 1;
				q.push(next);
			}
		}
	}
	return (INF == d[n - 1]) ? -1 : d[n - 1];
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> s(m), t(m);
	vector<set<int>> edges(n);
	for (int i = 0; i < m; i++) {
		cin >> s[i] >> t[i];
		s[i]--;
		t[i]--;
		edges[s[i]].insert(t[i]);
	}
	vector<int> d(n, INF), prev(n, -1);
	d[0] = 0;
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int next : edges[now]) {
			if (d[next] > d[now] + 1) {
				d[next] = d[now] + 1;
				q.push(next);
				prev[next] = now;
			}
		}
	}
	int answer = (INF == d[n - 1]) ? -1 : d[n - 1];
	for (int i = 0; i < m; i++) {
		if ((-1 != answer) && (prev[t[i]] == s[i])) {
			edges[s[i]].erase(t[i]);
			cout << dijkstra(edges) << endl;
			edges[s[i]].insert(t[i]);
		} else {
			cout << answer << endl;
		}
	}
	return 0;
}
