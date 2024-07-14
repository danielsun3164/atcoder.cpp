#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

static const vector<int> dx = {1, 1, 1, 0, 0, -1, -1, -1};
static const vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};

bool hantei(int h, int w, vector<vector<bool>> &used, int sx, int sy) {
	for (int i = 0; i < int(dx.size()); i++) {
		int tx = sx + dx[i], ty = sy + dy[i];
		if ((tx >= 0) && (tx <= h) && (ty >= 0) && (ty < w) && (used[tx][ty])) {
			return false;
		}
	}
	return true;
}

void dfs(int h, int w, vector<int> &cnt, vector<vector<bool>> &used, vector<vector<int>> &state,
		 vector<map<int, pair<int, bool>>> &maps, int pos, int dep, int str) {
	int sx = pos / w, sy = pos % w;
	if (w + 1 == dep) {
		int idx = cnt[sy];
		bool flag = hantei(h, w, used, sx, sy);
		state[sy][idx] = str;
		maps[sy][str] = make_pair(idx, flag);
		cnt[sy]++;
		return;
	}
	dfs(h, w, cnt, used, state, maps, pos + 1, dep + 1, str);
	if (hantei(h, w, used, sx, sy)) {
		used[sx][sy] = true;
		dfs(h, w, cnt, used, state, maps, pos + 1, dep + 1, str + (1 << dep));
		used[sx][sy] = false;
	}
}

int main() {
	int h, w, n = 1 << 18;
	cin >> h >> w;
	vector<string> c(h);
	for (int i = 0; i < h; i++) {
		cin >> c[i];
	}
	vector<int> cnt(w);
	vector<vector<bool>> used(h + 1, vector<bool>(w, false));
	vector<vector<int>> state(w, vector<int>(n));
	vector<map<int, pair<int, bool>>> maps(w);
	for (int i = 0; i < w; i++) {
		dfs(h, w, cnt, used, state, maps, i, 0, 0);
	}
	vector<vector<int>> nex0(w, vector<int>(n)), nex1(w, vector<int>(n));
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			int t = state[i][j], t0 = (t >> 1), t1 = t0 + (1 << w);
			nex0[i][j] = maps[(i + 1) % w][t0].first;
			nex1[i][j] = maps[i][t].second ? maps[(i + 1) % w][t1].first : -1;
		}
	}

	vector<vector<vector<mint>>> dp(h + 1, vector<vector<mint>>(w, vector<mint>(n, 0)));
	dp[0][0][0] = 1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int n1 = i, n2 = j + 1;
			if (w == n2) {
				n1++;
				n2 = 0;
			}
			for (int k = 0; k < cnt[j]; k++) {
				if (0 == dp[i][j][k]) {
					continue;
				}
				dp[n1][n2][nex0[j][k]] += dp[i][j][k];
				if ((-1 != nex1[j][k]) && ('.' == c[i][j])) {
					dp[n1][n2][nex1[j][k]] += dp[i][j][k];
				}
			}
		}
	}
	mint ans = 0;
	for (int i = 0; i < cnt[0]; i++) {
		ans += dp[h][0][i];
	}
	cout << ans.val() << endl;
	return 0;
}
