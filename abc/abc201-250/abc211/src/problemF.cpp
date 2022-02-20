#include <bits/stdc++.h>
#include <atcoder/lazysegtree>
using namespace std;

const int MAX = 100'000;

struct dat {
	int x, y, idx;

	bool operator <(const dat other) const {
		return (x == other.x) ? (y < other.y) : (x < other.x);
	}
};

struct grid {
	int x, yl, yr, num;

	bool operator <(const grid other) const {
		return x < other.x;
	}
};

int e() {
	return 0;
}
int op(int l, int r) {
	return max(l, r);
}
int mapping(int f, int x) {
	return f + x;
}
int composition(int l, int r) {
	return l + r;
}

int main() {
	int n;
	cin >> n;
	vector<grid> gd;
	atcoder::lazy_segtree<int, op, e, int, mapping, composition, e> seg(MAX + 1);
	while (n--) {
		int m;
		cin >> m;
		vector<dat> a(m);
		for (int i = 0; i < m; i++) {
			cin >> a[i].x >> a[i].y;
			a[i].idx = i;
		}
		auto me = min_element(a.begin(), a.end());
		int s = (me->x == a[(me->idx + 1) % m].x) ? 1 : -1;
		for (int i = 0; i < m; i++) {
			if (a[i].x == a[(i + 1) % m].x) {
				int y = a[i].y, y2 = a[(i + 1) % m].y;
				gd.push_back( { a[i].x, min(y, y2), max(y, y2), (y < y2) ? s : -s });
			}
		}
	}
	int q;
	cin >> q;
	vector<dat> qy(q);
	for (int i = 0; i < q; i++) {
		cin >> qy[i].x >> qy[i].y;
		qy[i].idx = i;
	}
	sort(qy.begin(), qy.end());
	sort(gd.begin(), gd.end());
	vector<int> ans(q);
	int g_cnt = 0, q_cnt = 0;
	for (int x = 0; x <= MAX; x++) {
		while ((g_cnt < int(gd.size())) && (gd[g_cnt].x <= x)) {
			grid g = gd[g_cnt++];
			seg.apply(g.yl, g.yr, g.num);
		}
		while ((q_cnt < q) && (qy[q_cnt].x <= x)) {
			dat query = qy[q_cnt++];
			ans[query.idx] = seg.get(query.y);
		}
	}
	for (int ai : ans) {
		cout << ai << endl;
	}
	return 0;
}
