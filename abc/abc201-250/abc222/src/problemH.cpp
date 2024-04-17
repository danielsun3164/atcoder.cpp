#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	cin >> n;
	int m = (n << 1);
	vector<mint> u(n + 1, 0), inv(n + 1, 1);
	u[0] = 1;
	for (int i = 1; i < n; i++) {
		u[i] = (u[i - 1] * 3 * (m + 1 - i) + ((i > 1) ? u[i - 2] * (2 * m + 2 - i) : 0)) * inv[i];
		inv[i + 1] = -inv[inv[i].mod() % (i + 1)] * (inv[i].mod() / (i + 1));
	}
	cout << (u[n - 1] * inv[n]).val() << endl;
	return 0;
}
