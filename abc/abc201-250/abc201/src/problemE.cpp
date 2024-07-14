#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const ll INF = LONG_MAX >> 1;
const int N = 61;

int main(void) {
	int n;
	cin >> n;
	vector<vector<pair<int, ll>>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		ll w;
		cin >> u >> v >> w;
		u--;
		v--;
		edges[u].emplace_back(make_pair(v, w));
		edges[v].emplace_back(make_pair(u, w));
	}
	vector<ll> dist(n, INF);
	dist[0] = 0LL;
	queue<pair<int, ll>> que;
	que.push({0, 0LL});
	while (!que.empty()) {
		pair<int, ll> now = que.front();
		que.pop();
		for (pair<int, ll> next : edges[now.first]) {
			if (INF == dist[next.first]) {
				dist[next.first] = now.second ^ next.second;
				que.push({next.first, dist[next.first]});
			}
		}
	}
	vector<vector<int>> count(N, vector<int>(2, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < n; j++) {
			count[i][1 & (dist[j] >> i)]++;
		}
	}
	mint two = 2, answer = 0;
	for (int i = 0; i < N; i++) {
		mint now = two.pow(i);
		now *= count[i][0];
		now *= count[i][1];
		answer += now;
	}
	cout << answer.val() << endl;
	return 0;
}
