#include <bits/stdc++.h>
using namespace std;

const static int N = 9;

int blank(vector<int> &blocks) {
	for (int i = 0; i < N; i++) {
		if (0 == blocks[i]) {
			return i;
		}
	}
	return 0;
}

int main(void) {
	int m;
	cin >> m;
	vector<vector<int>> edges(N);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<int> end(N, 0);
	for (int i = 1; i < N; i++) {
		end[i - 1] = i;
	}
	map<vector<int>, int> mp;
	mp[end] = 0;
	queue<vector<int>> que;
	que.push(end);
	while (!que.empty()) {
		vector<int> v = que.front();
		que.pop();
		int cost = mp[v], now = blank(v);
		for (int next : edges[now]) {
			swap(v[now], v[next]);
			if (!mp.contains(v)) {
				mp[v] = cost + 1;
				que.push(v);
			}
			swap(v[now], v[next]);
		}
	}
	vector<int> start(N, 0);
	for (int i = 1; i < N; i++) {
		int p;
		cin >> p;
		start[p - 1] = i;
	}
	cout << (mp.contains(start) ? mp[start] : -1) << endl;
	return 0;
}
