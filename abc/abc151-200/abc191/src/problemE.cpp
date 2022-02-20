#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

vector<int> bfs(vector<vector<pair<int, int>>> &childrens, int s) {
	vector<int> d(childrens.size(), INF);
	vector<bool> v(childrens.size(), false);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
	for (pair<int, int> p : childrens[s]) {
		que.push(p);
	}
	while (!que.empty()) {
		pair<int, int> p = que.top();
		que.pop();
		int x = p.second;
		if (!v[x]) {
			v[x] = true;
			d[x] = min(d[x], p.first);
			if (x == s) {
				return d;
			}
			for (pair<int, int> pn : childrens[x]) {
				if (!v[pn.second] && (d[pn.second] > d[x] + pn.first)) {
					que.push(make_pair(d[x] + pn.first, pn.second));
				}
			}
		}
	}
	return d;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> childrens(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		childrens[a].emplace_back(make_pair(c, b));
	}
	for (int i = 0; i < n; i++) {
		int d = bfs(childrens, i)[i];
		cout << ((INF == d) ? -1 : d) << endl;
	}
	return 0;
}
