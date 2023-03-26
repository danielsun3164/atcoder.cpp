#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n + m);
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int r;
			cin >> r;
			r--;
			edges[r].emplace_back(n + i);
			edges[n + i].emplace_back(r);
		}
	}
	vector<int> d(n + m, INF);
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
	for (int i = 0; i < n; i++) {
		cout << ((INF == d[i]) ? -1 : d[i] >> 1) << endl;
	}
	return 0;
}
