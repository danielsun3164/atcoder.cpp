#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_MAX >> 1;

ll calc_pos(vector<ll> &v, ll limit) {
	ll res = 0L;
	int j = v.size() - 1;
	for (int i = 0; i < int(v.size()); i++) {
		while ((i < j) && (limit < v[i] * v[j])) {
			j--;
		}
		res += max(0, j - i);
	}
	return res;
}

ll calc_neg(vector<ll> &nv, vector<ll> &pv, ll limit) {
	if (limit >= 0) {
		return nv.size() * ll(pv.size());
	}
	ll res = 0LL;
	int j = 0;
	for (ll nvi : nv) {
		while ((j < int(pv.size())) && (limit < nvi * pv[j])) {
			j++;
		}
		res += pv.size() - j;
	}
	return res;
}

ll calc(int n, vector<ll> &nv, vector<ll> &nv2, vector<ll> &pv, ll limit) {
	ll res = calc_neg(nv, pv, limit);
	if (limit >= 0) {
		int zero = n - nv.size() - pv.size();
		res += zero * ll(n - zero) + zero * ll(zero - 1) / 2;
	}
	res += (limit > 0) ? calc_pos(nv2, limit) + calc_pos(pv, limit) : 0LL;
	return res;
}

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<ll> a(n);
	vector<ll> nv, nv2, pv;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a > 0) {
			pv.emplace_back(a);
		} else if (a < 0) {
			nv.emplace_back(a);
			nv2.emplace_back(-a);
		}
	}
	sort(nv.begin(), nv.end());
	sort(nv2.begin(), nv2.end());
	sort(pv.begin(), pv.end());
	ll ng = -INF, ok = INF;
	while (ok > ng + 1) {
		ll med = (ng + ok) >> 1;
		if (k <= calc(n, nv, nv2, pv, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
