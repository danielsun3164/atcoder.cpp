#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <atcoder/maxflow>
using namespace std;
using namespace atcoder;

const static int N = 3;
const static int M = 12;
const static int INF = 10'000;

void dfs(vector<vector<pair<int, int>>> &g, vector<bool> &used, vector<int> &res, int now) {
	for (pair<int, int> p : g[now]) {
		if (!used[p.second]) {
			used[p.second] = true;
			dfs(g, used, res, p.first);
		}
	}
	res.emplace_back(now);
}

vector<int> solve(vector<vector<pair<int, int>>> &g, int m) {
	vector<int> res;
	vector<bool> used(m, false);
	dfs(g, used, res, 0);
	reverse(res.begin(), res.end());
	return res;
}

int main(void) {
	vector<vector<int>> a(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			a[i][j] <<= 1;
		}
	}
	vector<int> sum(2, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum[1 & (i * N + j)] += a[i][j];
		}
	}
	if (sum[0] != sum[1]) {
		cout << "NO" << endl;
		return 0;
	}
	vector<pair<int, int>> edge;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int now = i * N + j;
			if (i < N - 1) {
				edge.push_back({now, now + 3});
			}
			if (j < N - 1) {
				edge.push_back({now, now + 1});
			}
		}
	}
	for (int bit = 1; bit < (1 << M); bit++) {
		if (8 == __builtin_popcount(bit)) {
			vector<int> c(N * N);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					c[i * N + j] = a[i][j];
				}
			}
			dsu d(N * N);
			bool ok = true;
			for (int i = 0; i < M; i++) {
				if (1 & (bit >> i)) {
					if (d.same(edge[i].first, edge[i].second)) {
						ok = false;
						break;
					}
					d.merge(edge[i].first, edge[i].second);
					c[edge[i].first]--;
					c[edge[i].second]--;
				}
			}
			for (int i = 0; i < N * N; i++) {
				if (c[i] < 0) {
					ok = false;
					break;
				}
			}
			if (!ok) {
				continue;
			}
			mf_graph<int> graph(11);
			for (int i = 0; i < M; i++) {
				if (1 & edge[i].first) {
					graph.add_edge(edge[i].second, edge[i].first, INF);
				} else {
					graph.add_edge(edge[i].first, edge[i].second, INF);
				}
			}
			int s = N * N, t = s + 1;
			for (int i = 0; i < N * N; i++) {
				if (1 & i) {
					graph.add_edge(i, t, c[i]);
				} else {
					graph.add_edge(s, i, c[i]);
				}
			}
			if (graph.flow(s, t) != sum[0] - 8) {
				continue;
			}
			vector<vector<pair<int, int>>> g(N * N);
			int tmp = 0;
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < (1 & (bit >> i)) + graph.get_edge(i).flow; j++) {
					g[edge[i].first].push_back({edge[i].second, tmp});
					g[edge[i].second].push_back({edge[i].first, tmp++});
				}
			}
			vector<int> res = solve(g, tmp);
			string answer;
			for (int i = 0; i < int(res.size()) - 1; i++) {
				switch (res[i + 1] - res[i]) {
					case -1:
						answer += 'L';
						break;
					case 1:
						answer += 'R';
						break;
					case -3:
						answer += 'U';
						break;
					default:
						answer += 'D';
						break;
				}
			}
			cout << answer << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
