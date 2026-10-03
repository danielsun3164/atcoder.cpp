#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using pi = pair<int, int>;
using ppi = pair<pi, int>;
using mint = atcoder::modint998244353;

const char EMPTY = '.';
const int INF = INT_MAX >> 1;
const int N = 8;
const vector<int> DX{0, 0, 1, 1, 1, -1, -1, -1};
const vector<int> DY{-1, 1, -1, 0, 1, -1, 0, 1};

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> c(h);
	for (string& ci : c) {
		cin >> ci;
	}
	int sx = -1, sy = -1, gx = -1, gy = -1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ('S' == c[i][j]) {
				sx = i;
				sy = j;
			}
			if ('G' == c[i][j]) {
				gx = i;
				gy = j;
			}
		}
	}
	set<pi> path, uv, u;
	{
		int i = sx, j = sy;
		while (i < gx) {
			i++;
			path.emplace(i, j);
		}
		while (i > gx) {
			i--;
			path.emplace(i, j);
		}
		while (j < gy) {
			j++;
			path.emplace(i, j);
		}
		while (j > gy) {
			j--;
			path.emplace(i, j);
		}
		path.erase(pi{gx, gy});
	}

	for (auto& [i, j] : path) {
		for (int k = 0; k < N; k++) {
			int ni = i + DX[k], nj = j + DY[k];
			if (0 == path.count(pi{ni, nj})) {
				uv.emplace(ni, nj);
			}
		}
	}
	uv.erase(pi{sx, sy});
	uv.erase(pi{gx, gy});

	if (!uv.empty()) {
		auto dfs = [&](auto rc, int i, int j) -> void {
			u.emplace(i, j);
			for (int k = 0; k < N; k++) {
				int ni = i + DX[k], nj = j + DY[k];
				if ((0 == uv.count(pi{ni, nj})) || u.count(pi{ni, nj})) {
					continue;
				}
				rc(rc, ni, nj);
			}
		};
		auto [ii, jj] = *begin(uv);
		dfs(dfs, ii, jj);
	}

	auto calc_state = [&](int i, int j, int k, int l) -> int {
		return ((path.count(pi{i, j}) && u.count(pi{k, l})) ||
				(path.count(pi{k, l}) && u.count(pi{i, j})))
				   ? 1
				   : 0;
	};

	vector<vector<vector<ppi>>> g(h + 1, vector<vector<ppi>>(w + 1, vector<ppi>()));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (EMPTY != c[i][j]) {
				continue;
			}
			if ((i < h - 1) && (EMPTY == c[i + 1][j])) {
				int st = calc_state(i, j, i + 1, j);
				g[i][j].emplace_back(pi{i + 1, j}, st);
				g[i + 1][j].emplace_back(pi{i, j}, st);
			}
			if ((j < w - 1) && (EMPTY == c[i][j + 1])) {
				int st = calc_state(i, j, i, j + 1);
				g[i][j].emplace_back(pi{i, j + 1}, st);
				g[i][j + 1].emplace_back(pi{i, j}, st);
			}
			if ((i < h - 1) && (j < w - 1) && (EMPTY == c[i + 1][j + 1])) {
				int st = calc_state(i, j, i + 1, j + 1);
				g[i][j].emplace_back(pi{i + 1, j + 1}, st);
				g[i + 1][j + 1].emplace_back(pi{i, j}, st);
			}
			if ((i > 0) && (j < w - 1) && (EMPTY == c[i - 1][j + 1])) {
				int st = calc_state(i, j, i - 1, j + 1);
				g[i][j].emplace_back(pi{i - 1, j + 1}, st);
				g[i - 1][j + 1].emplace_back(pi{i, j}, st);
			}
		}
	}
	{
		vector<pair<pi, pi>> vec;
		for (int i = 0; i < h; i++) {
			if (EMPTY == c[i][0]) {
				vec.emplace_back(pi{i, 0}, pi(i, -1));
			}
			if (EMPTY == c[i][w - 1]) {
				vec.emplace_back(pi{i, w - 1}, pi{i, w});
			}
		}
		for (int j = 0; j < w; j++) {
			if (EMPTY == c[0][j]) {
				vec.emplace_back(pi{0, j}, pi(-1, j));
			}
			if (EMPTY == c[h - 1][j]) {
				vec.emplace_back(pi{h - 1, j}, pi{h, j});
			}
		}
		for (int i = 0; i < int(vec.size()); i++) {
			for (int j = 0; j < i; j++) {
				pi p1 = vec[i].first, w1 = vec[i].second, p2 = vec[j].first, w2 = vec[j].second;
				int st = calc_state(p1.first, p1.second, w1.first, w1.second) ^
						 calc_state(p2.first, p2.second, w2.first, w2.second);
				g[p1.first][p1.second].emplace_back(p2, st);
				g[p2.first][p2.second].emplace_back(p1, st);
			}
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			sort(g[i][j].begin(), g[i][j].end());
			g[i][j].erase(unique(g[i][j].begin(), g[i][j].end()), g[i][j].end());
		}
	}

	int answer1 = INF;
	mint answer2 = 0;
	vector<vector<bool>> banned(h, vector<bool>(w, false));
	vector<vector<vector<int>>> dist(h, vector<vector<int>>(w, vector<int>(2)));
	vector<vector<vector<mint>>> dp(h, vector<vector<mint>>(w, vector<mint>(2)));
	for (auto& [ii, jj] : path) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				fill(dist[i][j].begin(), dist[i][j].end(), INF);
				fill(dp[i][j].begin(), dp[i][j].end(), 0);
			}
		}
		dist[ii][jj][0] = 0;
		dp[ii][jj][0] = 1;
		queue<vector<int>> que;
		que.push(vector<int>{ii, jj, 0});
		while (!que.empty()) {
			vector<int> v = que.front();
			que.pop();
			int curi = v[0], curj = v[1], st = v[2], curdist = dist[curi][curj][st];
			mint curdp = dp[curi][curj][st];
			for (auto& [dst, delta] : g[curi][curj]) {
				int dsti = dst.first, dstj = dst.second;
				if (banned[dsti][dstj]) {
					continue;
				}
				int next = st ^ delta;
				if (curdist + 1 < dist[dsti][dstj][next]) {
					dist[dsti][dstj][next] = curdist + 1;
					dp[dsti][dstj][next] = curdp;
					que.push(vector<int>{dsti, dstj, next});
				} else if (curdist + 1 == dist[dsti][dstj][next]) {
					dp[dsti][dstj][next] += curdp;
				}
			}
		}
		if (dist[ii][jj][1] < answer1) {
			answer1 = dist[ii][jj][1];
			answer2 = dp[ii][jj][1];
		} else if (dist[ii][jj][1] == answer1) {
			answer2 += dp[ii][jj][1];
		}
		banned[ii][jj] = true;
	}
	if (INF == answer1) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
		cout << answer1 << " " << (answer2 / 2).val() << endl;
	}
	return 0;
}
