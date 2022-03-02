#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dfs(vector<int> &c, vector<vector<int>> &edges, vector<ll> &count, vector<ll> &answer, int now, int prv) {
	ll size = 1LL, bfr = count[c[now]];
	for (int nxt : edges[now]) {
		if (nxt != prv) {
			ll p = count[c[now]];
			ll d = dfs(c, edges, count, answer, nxt, now);
			size += d;
			ll k = d - (count[c[now]] - p);
			answer[c[now]] -= k * (k + 1) / 2;
		}
	}
	count[c[now]] = bfr + size;
	return size;
}

int main() {
	ll n;
	cin >> n;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		c[i]--;
	}
	vector<vector<int>> edges(n);
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	vector<ll> count(n, 0LL), answer(n, n * (ll) (n + 1) / 2);
	dfs(c, edges, count, answer, 0, -1);
	for (int i = 0; i < n; i++) {
		if (i != c[0]) {
			ll k = n - count[i];
			answer[i] -= k * (k + 1) / 2;
		}
	}
	for (ll ai : answer) {
		cout << ai << endl;
	}
	return 0;
}
