#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

struct Edge {
	int to;
	ll c, d;
};

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<Edge>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		ll c, d;
		cin >> a >> b >> c >> d;
		a--;
		b--;
		edges[a].push_back( { b, c, d });
		edges[b].push_back( { a, c, d });
	}
	vector<ll> d(n, INF);
	d[0] = 0LL;
	vector<bool> visited(n, false);
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push(make_pair(0LL, 0));
	while (!que.empty()) {
		int now = que.top().second;
		que.pop();
		if (!visited[now]) {
			visited[now] = true;
			for (Edge &next : edges[now]) {
				// 待ち時間
				ll w = max(0LL, ll(round(sqrt(double(next.d)))) - d[now] - 1);
				ll nd = d[now] + next.c + w + next.d / (d[now] + w + 1);
				if (d[next.to] > nd) {
					d[next.to] = nd;
					que.push(make_pair(nd, next.to));
				}
			}
		}
	}
	cout << ((INF == d[n - 1]) ? -1 : d[n - 1]) << endl;
	return 0;
}
