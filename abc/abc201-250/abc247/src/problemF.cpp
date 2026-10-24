#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	cin >> n;
	vector<int> p(n), q(n);
	for (int &pi : p) {
		cin >> pi;
	}
	for (int &qi : q) {
		cin >> qi;
	}
	vector<mint> f(n + 1), g(n + 1);
	f[0] = f[1] = g[0] = g[1] = 1;
	for (int i = 2; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		g[i] = f[i] + f[i - 2];
	}
	atcoder::dsu uf(n);
	for (int i = 0; i < n; i++) {
		p[i]--, q[i]--;
		uf.merge(p[i], q[i]);
	}
	mint answer = 1;
	for (int i = 0; i < n; i++) {
		if (i == uf.leader(i)) {
			answer *= g[uf.size(i)];
		}
	}
	cout << answer.val() << endl;
	return 0;
}
