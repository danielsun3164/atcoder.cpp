#include <bits/stdc++.h>
using namespace std;

map<tuple<int, int, int, int>, int> memo;

int dfs(int xs, int ys, int xe, int ye, vector<pair<int, int>> &p, vector<bool> &used) {
	tuple<int, int, int, int> k = make_tuple(xs, ys, xe, ye);  // @suppress("Invalid arguments")
	auto it = memo.find(k);
	if (it != memo.end()) {
		return it->second;
	}
	int ans = 0;
	if ((xe >= xs) && (ye >= ys)) {
		for (int i = 0; i < int(p.size()); i++) {
			int x = p[i].first, y = p[i].second;
			if (!used[i] && (xs <= x) && (x <= xe) && (ys <= y) && (y <= ye)) {
				used[i] = true;
				ans = max(ans, xe - xs + ye - ys + 1 + dfs(xs, ys, x - 1, y - 1, p, used) +
								   dfs(x + 1, ys, xe, y - 1, p, used) +
								   dfs(xs, y + 1, x - 1, ye, p, used) +
								   dfs(x + 1, y + 1, xe, ye, p, used));
				used[i] = false;
			}
		}
	}
	memo[k] = ans;
	return ans;
}

int main(void) {
	int w, h, n;
	cin >> w >> h >> n;
	vector<pair<int, int>> p(n);
	vector<bool> used(n, false);
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	cout << dfs(1, 1, w, h, p, used) << endl;
	return 0;
}
