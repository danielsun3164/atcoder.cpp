#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 60;

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	vector<vector<tuple<int, int, ll>>> query(n);
	for (int i = 0; i < q; i++) {
		int l, r;
		ll x;
		cin >> l >> r >> x;
		l--;
		r--;
		query[r].emplace_back(l, i, x);
	}
	vector<pair<ll, int>> base(N);
	for (int i = 0; i < N; i++) {
		base[i] = { 1LL << i, -1 };
	}
	vector<bool> answers(q);
	for (int i = 0; i < n; i++) {
		pair<ll, int> add(a[i], i);
		for (int j = N - 1; j >= 0; j--) {
			if ((add.first >> j) & 1LL) {
				if (base[j].second < add.second) {
					swap(base[j], add);
				}
				add.first ^= base[j].first;
			}
		}
		for (auto [l, qi, x] : query[i]) {
			ll y = x;
			for (int j = N - 1; j >= 0; j--) {
				if (((y >> j) & 1LL) && (base[j].second >= l)) {
					y ^= base[j].first;
				}
			}
			answers[qi] = (y == 0);
		}
	}
	for (bool ai : answers) {
		cout << (ai ? "Yes" : "No") << endl;
	}
	return 0;
}
