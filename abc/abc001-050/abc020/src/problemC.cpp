#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LLONG_MAX >> 1;
const char BLACK = '#';
const char START = 'S';
const char GOAL = 'G';
const vector<int> XS { 0, 0, 1, -1 };
const vector<int> YS { 1, -1, 0, 0 };

int h, w, sx, sy, ex, ey;

bool is_ok(vector<string> &s, int z, ll t) {
	vector<vector<ll>> d(h, vector<ll>(w, INF));
	d[sx][sy] = 0LL;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
	q.push( { 0LL, sx * w + sy });
	while (!q.empty()) {
		pair<ll, int> now = q.top();
		q.pop();
		int x = now.second / w, y = now.second % w;
		if ((ex == x) && (ey == y)) {
			break;
		}
		if (now.first == d[x][y]) {
			for (int i = 0; i < int(XS.size()); i++) {
				int nx = x + XS[i], ny = y + YS[i];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w)) {
					if (d[x][y] + ((BLACK == s[nx][ny]) ? z : 1) < d[nx][ny]) {
						d[nx][ny] = d[x][y] + ((BLACK == s[nx][ny]) ? z : 1);
						q.push( { d[nx][ny], nx * w + ny });
					}
				}
			}
		}
	}
	return d[ex][ey] <= t;
}

int main(void) {
	ll t;
	cin >> h >> w >> t;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
		for (int j = 0; j < w; j++) {
			if (START == s[i][j]) {
				sx = i;
				sy = j;
			}
			if (GOAL == s[i][j]) {
				ex = i;
				ey = j;
			}
		}
	}
	int ok = 1, ng = t + 1;
	while (ng - ok > 1) {
		int med = (ok + ng) >> 1;
		if (is_ok(s, med, t)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
