#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return (0L == b) ? a : gcd(b, a % b);
}

void calc(int now, vector<int> p, vector<int> q, vector<int> r, vector<int> b, vector<ll> &w) {
	if (r[now] >= 0) {
		calc(r[now], p, q, r, b, w);
	}
	if (b[now] >= 0) {
		calc(b[now], p, q, r, b, w);
	}
	ll wr = (r[now] >= 0) ? w[r[now]] : 1L, wb = (b[now] >= 0) ? w[b[now]] : 1L;
	ll g = gcd(wr * p[now], wb * q[now]);
	w[now] = wb * q[now] / g * wr + wr * p[now] / g * wb;
}

int main() {
	int n;
	cin >> n;
	vector<int> p(n), q(n), r(n), b(n);
	vector<ll> w(n);
	vector<bool> hasRoot(n, false);
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> q[i] >> r[i] >> b[i];
		r[i]--;
		b[i]--;
		if (r[i] >= 0) {
			hasRoot[r[i]] = true;
		}
		if (b[i] >= 0) {
			hasRoot[b[i]] = true;
		}
	}
	int root = 0;
	for (int i = 0; i < n; i++) {
		if (!hasRoot[i]) {
			root = i;
			break;
		}
	}
	calc(root, p, q, r, b, w);
	cout << w[root] << endl;
	return 0;
}
