#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;
const vector<pair<int, int>> DI = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

pair<int, int> add(pair<int, int> &a, pair<int, int> &b) {
	return {a.first + b.first, a.second + b.second};
}

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	pair<int, int> s, g;
	cin >> s.first >> s.second >> g.first >> g.second;
	vector<pair<int, int>> xy(n);
	for (pair<int, int> &xyi : xy) {
		cin >> xyi.first >> xyi.second;
	}
	vector<pair<int, int>> a = {s, g};
	for (pair<int, int> xyi : xy) {
		for (pair<int, int> dii : DI) {
			pair<int, int> pos = add(xyi, dii);
			if ((pos.first >= 1) && (pos.first <= h) && (pos.second >= 1) && (pos.second <= w)) {
				a.emplace_back(pos);
			}
		}
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	int asize = a.size();
	auto num = [&](pair<int, int> pos) {
		int p = lower_bound(a.begin(), a.end(), pos) - a.begin();
		if ((p >= 0) && (p < asize) && (a[p] == pos)) {
			return p;
		}
		return -1;
	};
	vector<int> dis(asize, INF);
	queue<int> que;
	{
		int sta = num(s);
		que.push(sta);
		dis[sta] = 0;
	}
	map<int, vector<int>> bh, bw;
	for (pair<int, int> xyi : xy) {
		bh[xyi.first].emplace_back(xyi.second);
		bw[xyi.second].emplace_back(xyi.first);
	}
	for (auto &x : bh) {
		sort(x.second.begin(), x.second.end());
	}
	for (auto &x : bw) {
		sort(x.second.begin(), x.second.end());
	}
	while (!que.empty()) {
		auto calc = [](vector<int> &a, int b) {
			vector<int> result;
			int p = lower_bound(a.begin(), a.end(), b) - a.begin();
			for (int i = p - 1; i <= p; i++) {
				if ((i >= 0) && (i < int(a.size()))) {
					result.emplace_back((i == p - 1) ? a[i] + 1 : a[i] - 1);
				}
			}
			return result;
		};
		int now = que.front();
		que.pop();
		if (bh.find(a[now].first) != bh.end()) {
			vector<int> poss = calc(bh[a[now].first], a[now].second);
			for (int py : poss) {
				int nm = num({a[now].first, py});
				if ((-1 != nm) && (dis[nm] > dis[now] + 1)) {
					dis[nm] = dis[now] + 1;
					que.push(nm);
				}
			}
		}
		if (bw.find(a[now].second) != bw.end()) {
			vector<int> poss = calc(bw[a[now].second], a[now].first);
			for (int px : poss) {
				int nm = num({px, a[now].second});
				if ((-1 != nm) && (dis[nm] > dis[now] + 1)) {
					dis[nm] = dis[now] + 1;
					que.push(nm);
				}
			}
		}
	}
	int goal = num(g);
	cout << ((dis[goal] != INF) ? dis[goal] : -1) << endl;
	return 0;
}
