#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

const static int N = 200'002;

struct Q {
	int num;
	pair<int, int> pos;
	int mid, kei;
};

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> xy(n);
	for (pair<int, int> &xyi : xy) {
		int x, y;
		cin >> x >> y;
		xyi.first = x - y;
		xyi.second = x + y;
	}
	sort(xy.begin(), xy.end());
	int q;
	cin >> q;
	vector<pair<int, int>> ab(q);
	vector<int> k(q);
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b >> k[i];
		ab[i].first = a - b;
		ab[i].second = a + b;
	}
	vector<int> ok(q, N), ng(q, -1), mid(q);
	while (true) {
		bool end = true;
		for (int i = 0; i < q; i++) {
			if (ok[i] > ng[i] + 1) {
				end = false;
			}
			mid[i] = (ok[i] + ng[i]) / 2;
		}
		if (end) {
			break;
		}
		vector<Q> c;
		for (int i = 0; i < q; i++) {
			c.push_back({i, {ab[i].first - mid[i] - 1, ab[i].second}, mid[i], -1});
			c.push_back({i, {ab[i].first + mid[i], ab[i].second}, mid[i], 1});
		}
		sort(c.begin(), c.end(), [](Q q1, Q q2) { return q1.pos.first < q2.pos.first; });
		vector<int> count(q, 0);
		atcoder::fenwick_tree<int> seg(N + 1);
		int c_pos = 0, cs = q << 1;
		for (int xy_pos = 0; xy_pos <= n; xy_pos++) {
			while ((c_pos < cs) && ((xy_pos == n) || (c[c_pos].pos.first < xy[xy_pos].first))) {
				int value = seg.sum(max(0, c[c_pos].pos.second - c[c_pos].mid),
									min(N, c[c_pos].pos.second + c[c_pos].mid) + 1);
				count[c[c_pos].num] += value * c[c_pos].kei;
				c_pos++;
			}
			if (xy_pos == n) {
				break;
			}
			seg.add(xy[xy_pos].second, 1);
		}

		for (int i = 0; i < q; i++) {
			if (count[i] >= k[i]) {
				ok[i] = mid[i];
			} else {
				ng[i] = mid[i];
			}
		}
	}
	for (int oki : ok) {
		cout << oki << endl;
	}
	return 0;
}
