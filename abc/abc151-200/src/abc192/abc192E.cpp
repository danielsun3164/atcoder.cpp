#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

vector<ll> bfs(vector<vector<tuple<int, ll, ll>>> &childrens, int s) {
	vector<ll> d(childrens.size(), INF);
	vector<bool> v(childrens.size(), false);
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
	que.push(make_pair(0L, s));
	d[s] = 0L;
	while (!que.empty()) {
		pair<ll, int> p = que.top();
		que.pop();
		int x = p.second;
		if (!v[x]) {
			v[x] = true;
			for (tuple<int, ll, ll> tn : childrens[x]) {
				int n;
				ll t, k;
				tie(n, t, k) = tn;
				if (!v[n] && (d[n] > (d[x] + k - 1) / k * k + t)) {
					d[n] = (d[x] + k - 1) / k * k + t;
					que.push(make_pair(d[n], n));
				}
			}
		}
	}
	return d;
}

int main(void) {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	x--;
	y--;
	vector<vector<tuple<int, ll, ll>>> childrens(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		ll t, k;
		cin >> a >> b >> t >> k;
		a--;
		b--;
		childrens[a].emplace_back(make_tuple(b, t, k));
		childrens[b].emplace_back(make_tuple(a, t, k)); // @suppress("Invalid arguments")
	}
	ll d = bfs(childrens, x)[y];
	cout << ((INF == d) ? -1 : d) << endl;
	return 0;
}
