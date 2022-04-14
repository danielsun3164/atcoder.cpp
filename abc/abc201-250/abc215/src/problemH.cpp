#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint binom(int n, int m) {
	return (n >= m) ? fact[n] * inv_fact[m] * inv_fact[n - m] : 0;
}

template<class F, class T>
void bitwise_transform(const F f, std::vector<T> &a) {
	using usize = std::size_t;
	const usize n = a.size();
	for (usize w = 1; w != n; w *= 2) {
		for (usize k = 0; k != n; k += w * 2) {
			for (usize i = 0; i != w; i += 1) {
				f(a[k + i], a[k + w + i]);
			}
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	int p = 1 << n;
	vector<int> a(n), f(p, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		f[1 << i] += a[i];
	}
	vector<int> b(m), c(m, 0), g(p, 0);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int d;
			cin >> d;
			c[j] |= d << i;
		}
	}
	for (int i = 0; i < m; i++) {
		g[c[i]] += b[i];
	}
	bitwise_transform([](int &l, int &r) {
		r += l;
	}, f);
	bitwise_transform([](int &l, int &r) {
		r += l;
	}, g);
	int x = INT_MAX;
	for (int s = 0; s < p; s++) {
		if (g[s] > 0) {
			x = min(x, f[s] - g[s] + 1);
		}
	}
	if (x <= 0) {
		cout << "0 1" << endl;
		return 0;
	}
	vector<int> h(p, 0);
	for (int s = 0; s < p; s++) {
		if ((g[s] > 0) && (x == f[s] - g[s] + 1)) {
			h[s] = 1;
		}
	}
	bitwise_transform([](int &l, int &r) {
		l += r;
	}, h);
	int q = f.back();
	init(q);
	mint y = 0;
	for (int s = 0; s < p; s++) {
		if ((g[s] > 0) && (x == f[s] - g[s] + 1) && (1 == h[s])) {
			y += binom(f[s], x);
		}
	}
	cout << x << " " << y.val() << endl;
	return 0;
}
