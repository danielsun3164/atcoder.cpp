#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> edges(n + 1);
	for (int i = 0; i < m; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		edges[l - 1].push_back( { r - l + 1 - x, r });
	}
	for (int i = 0; i < n; i++) {
		edges[i + 1].push_back( { 0, i });
		edges[i].push_back( { 1, i + 1 });
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	que.push( { 0, 0 });
	vector<int> b(n + 1, INF);
	b[0] = 0;
	while (!que.empty()) {
		pair<int, int> now = que.top();
		que.pop();
		if (now.first == b[now.second]) {
			for (pair<int, int> edge : edges[now.second]) {
				if (b[edge.second] > b[now.second] + edge.first) {
					b[edge.second] = b[now.second] + edge.first;
					que.push( { b[edge.second], edge.second });
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << (1 - (b[i + 1] - b[i]));
	}
	cout << endl;
	return 0;
}
