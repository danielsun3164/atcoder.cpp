#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

mint bostan_mori(vector<mint> &p, vector<mint> &q, ll n) {
	while (n > 0) {
		vector<mint> inv_q(q.size());
		for (int i = 0; i < int(q.size()); i++) {
			inv_q[i] = (0 == (i & 1)) ? q[i] : -q[i];
		}
		p = atcoder::convolution(p, inv_q);
		q = atcoder::convolution(q, inv_q);
		int j = 0;
		for (int i = (n & 1); i < int(p.size()); i += 2) {
			p[j++] = p[i];
		}
		p.resize(j);
		j = 0;
		for (int i = 0; i < int(q.size()); i += 2) {
			q[j++] = q[i];
		}
		q.resize(j);
		n >>= 1;
	}
	return p[0] / q[0];
}

int main() {
	ll s;
	cin >> s;
	vector<mint> p = {1, 0, 0, 0, 1, 1, 3};
	vector<mint> q = {1, -1, -2, 0, 2, 4, -1, -3, -3, -1, 4, 2, 0, -2, -1, 1};
	cout << bostan_mori(p, q, s - 6).val() << endl;
	return 0;
}
