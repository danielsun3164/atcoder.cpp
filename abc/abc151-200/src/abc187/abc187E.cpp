#include <bits/stdc++.h>
using namespace std;

void setDepths(int now, int from, int depth, vector<int> &depths, vector<vector<int>> &edges) {
	depths[now] = depth;
	for (int next : edges[now]) {
		if (from != next) {
			setDepths(next, now, depth + 1, depths, edges);
		}
	}
}

int main(void) {
	int n, q;
	cin >> n;
	vector<int> a(n - 1), b(n - 1), depths(n);
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
		edges[a[i]].push_back(b[i]);
		edges[b[i]].push_back(a[i]);
	}
	setDepths(0, -1, 0, depths, edges);
	vector<long long> s(n, 0L);
	cin >> q;
	for (int i = 0; i < q; i++) {
		int t, e, x;
		cin >> t >> e >> x;
		e--;
		int to = (depths[a[e]] > depths[b[e]]) ? a[e] : b[e];
		t = (depths[a[e]] > depths[b[e]]) ? 3 - t : t;
		if (1 == t) {
			s[0] += x;
			s[to] -= x;
		} else {
			s[to] += x;
		}
	}
	queue<int> que;
	que.push(0);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		for (int next : edges[now]) {
			if (depths[next] > depths[now]) {
				s[next] += s[now];
				que.push(next);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
	return 0;
}
