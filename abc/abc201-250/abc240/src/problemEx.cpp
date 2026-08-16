#include <bits/stdc++.h>
#include <atcoder/segtree>
#include <atcoder/string>
using namespace std;
using namespace atcoder;

const int INF = INT_MAX >> 1;
const int N = 20;
const int MAX = 25010;
vector<vector<int>> aaa(N, vector<int>(MAX));

int rmq(int l, int r) {
	if (l == r) {
		return INF;
	}
	int k = 31 - __builtin_clz(r - l);
	return min(aaa[k][l], aaa[k][r - (1 << k)]);
}

int op(int a, int b) {
	return max(a, b);
}
int e() {
	return 0;
}

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	vector<int> sa = suffix_array(s);
	vector<int> lcpa = lcp_array(s, sa);
	vector<int> invsa(n);
	for (int i = 0; i < n; i++) {
		invsa[sa[i]] = i;
	}

	for (int i = 0; i < n - 1; i++) {
		aaa[0][i] = lcpa[i];
	}
	for (int k = 0; k < N - 1; k++) {
		for (int i = 0; i < n - 1; i++) {
			aaa[k + 1][i] = min(aaa[k][i], aaa[k][min(n - 1, i + (1 << k))]);
		}
	}

	vector<pair<int, int>> v;
	int u = int(sqrt(8 * n + 1) - 1) >> 1;
	for (int l = 0; l < n; l++) {
		for (int r = l + 1; r <= min(l + u, n); r++) {
			v.push_back({l, r});
		}
	}
	auto hikaku = [&](pair<int, int> p, pair<int, int> q) {
		int pl = p.first, pr = p.second, ql = q.first, qr = q.second;
		int LCPn = rmq(min(invsa[pl], invsa[ql]), max(invsa[pl], invsa[ql]));
		if ((LCPn >= pr - pl) || LCPn >= (qr - ql)) {
			if (pr - pl == qr - ql) {
				return pl > ql;
			} else {
				return pr - pl < qr - ql;
			}
		}
		return s[pl + LCPn] < s[ql + LCPn];
	};
	sort(v.begin(), v.end(), hikaku);
	segtree<int, op, e> seg(n + 1);
	for (auto [l, r] : v) {
		seg.set(r, max(seg.get(r), seg.prod(0, l + 1) + 1));
	}
	cout << seg.all_prod() << endl;
	return 0;
}
