#include <bits/stdc++.h>
using namespace std;

const int BSIZE = 316;

typedef struct {
	int id, l, r;
} query;

vector<int> a, cnt;
int result = 0, l = 0, r = 0;

void add(int id) {
	cnt[a[id]]++;
	if (0 == (cnt[a[id]] & 1)) {
		result++;
	}
}

void remove(int id) {
	if (0 == (cnt[a[id]] & 1)) {
		result--;
	}
	cnt[a[id]]--;
}

int mo_query(int tl, int tr) {
	if (!(r < tl)) {
		while (l < tl) {
			remove(l);
			l++;
		}
		while (tl < l) {
			l--;
			add(l);
		}
	}
	while (r < tr) {
		r++;
		add(r);
	}
	while (tr < r) {
		remove(r);
		r--;
	}
	while (l < tl) {
		remove(l);
		l++;
	}
	while (tl < l) {
		l--;
		add(l);
	}
	return result;
}

int main(void) {
	int n;
	cin >> n;
	a.resize(n);
	for (int &ai : a) {
		cin >> ai;
		ai--;
	}
	int q;
	cin >> q;
	vector<query> qv(q);
	for (int i = 0; i < q; i++) {
		cin >> qv[i].l >> qv[i].r;
		qv[i].l--, qv[i].r--;
		qv[i].id = i;
	}
	sort(qv.begin(), qv.end(), [](query x, query y) {
		int xl = x.l / BSIZE, yl = y.l / BSIZE, xr = x.r, yr = y.r;
		if (xl != yl) {
			return xl < yl;
		}
		if (xr == yr) {
			return x.id < y.id;
		}
		if (xl & 1) {
			return xr > yr;
		} else {
			return xr < yr;
		}
	});

	vector<int> answer(q);
	cnt.resize(n);
	add(0);
	for (query qvi : qv) {
		answer[qvi.id] = mo_query(qvi.l, qvi.r);
	}
	for (int ai : answer) {
		cout << ai << endl;
	}
	return 0;
}
