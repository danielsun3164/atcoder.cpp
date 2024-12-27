#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using edge = tuple<int, int, ll>;
using status = tuple<ll, int, ll>;

const ll INF = LONG_MAX >> 1;

int main(void) {
	int n, m;
	ll s;
	cin >> n >> m >> s;
	int max_a = 0;
	vector<vector<edge>> edges(n);
	for (int i = 0; i < m; i++) {
		int u, v, a;
		ll b;
		cin >> u >> v >> a >> b;
		u--;
		v--;
		edges[u].emplace_back(tie(v, a, b));
		edges[v].emplace_back(tie(u, a, b));
		max_a = max(max_a, a);
	}
	max_a *= (n - 1);
	vector<ll> c(n), d(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i] >> d[i];
	}
	vector<vector<ll>> dp(n, vector<ll>(max_a + 1, INF));
	priority_queue<status, vector<status>, greater<status>> que;
	que.push(make_tuple(0LL, 0, s));  // @suppress("Invalid arguments")
	while (!que.empty()) {
		ll time, money;
		int now;
		tie(time, now, money) = que.top();
		que.pop();
		money = min((ll)max_a, money);
		if (dp[now][money] > time) {
			dp[now][money] = time;
			if (money < max_a) {
				que.push(make_tuple(time + d[now], now,
									money + c[now]));  // @suppress("Invalid arguments")
			}
			for (edge e : edges[now]) {
				int nxt, a;
				ll b;
				tie(nxt, a, b) = e;
				if (money >= a) {
					que.push(
						make_tuple(time + b, nxt, money - a));	// @suppress("Invalid arguments")
				}
			}
		}
	}
	for (int i = 1; i < n; i++) {
		cout << *min_element(dp[i].begin(), dp[i].end()) << endl;
	}
	return 0;
}
