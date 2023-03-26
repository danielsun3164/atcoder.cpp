#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

void setMax(int now, vector<int> &a, vector<int> &ma, vector<vector<int>> &edges) {
	int r = -INF;
	for (int next : edges[now]) {
		if (-INF == ma[next]) {
			setMax(next, a, ma, edges);
		}
		r = max(r, ma[next]);
		r = max(r, a[next]);
	}
	ma[now] = r;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), ma(n, -INF);
	vector<vector<int>> edges(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		edges[x].push_back(y);
	}
	for (int i = 0; i < n; i++) {
		if (-INF == ma[i]) {
			setMax(i, a, ma, edges);
		}
	}
	int ans = -INF;
	for (int i = 0; i < n; i++) {
		ans = max(ans, ma[i] - a[i]);
	}
	cout << ans << endl;
	return 0;
}
