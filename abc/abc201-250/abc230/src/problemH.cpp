#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/internal_bit>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

vector<mint> get(vector<mint> &v, int l, int r) {
	return {begin(v) + l, begin(v) + r};
}

void dc(int b, int l, int r, vector<mint> &f, vector<mint> &g, vector<mint> &j) {
	if (l + 1 == r) {
		int n = l;
		if (n >= 2) {
			f[n] = (f[n] + j[n - 1]) / (n - 1);
		}
		if (n >= 1) {
			mint fg = (f[n] + g[n]) * n;
			for (int i = n; i < b; i += n) {
				j[i] += fg;
			}
		}
		return;
	}
	int m = (l + r) >> 1;
	dc(b, l, m, f, g, j);
	if (0 == l) {
		vector<mint> fj = convolution(get(f, 0, m), get(j, 0, m));
		for (int i = m; i < min(r, int(fj.size())); i++) {
			f[i] += fj[i];
		}
	} else {
		vector<mint> fj1 = convolution(get(f, l, m), get(j, 0, r - l));
		vector<mint> fj2 = convolution(get(f, 0, r - l), get(j, l, m));
		for (int i = m; i < r; i++) {
			f[i] += fj1[i - l] + fj2[i - l];
		}
	}
	dc(b, m, r, f, g, j);
}

int main(void) {
	int w, k;
	cin >> w >> k;
	int b = internal::bit_ceil((unsigned int)(w + 1));
	vector<mint> f(b), g(b), j(b);
	for (int i = 0; i < k; i++) {
		int wi;
		cin >> wi;
		g[wi]++;
	}
	dc(b, 0, b, f, g, j);
	for (int i = 2; i <= w; i++) {
		cout << f[i].val() << endl;
	}
	return 0;
}
