#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int MAX = 200'000;
vector<mint> fact(MAX + 1), inv_fact(MAX + 1);

void init() {
	fact[0] = 1;
	for (int i = 1; i <= MAX; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[MAX] = fact[MAX].inv();
	for (int i = MAX - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

mint ncr(int n, int r) {
	return ((r >= 0) && (r <= n)) ? fact[n] * inv_fact[n - r] * inv_fact[r] : 0;
}

int main() {
	int r, g, b, k, x, y, z;
	cin >> r >> g >> b >> k >> x >> y >> z;
	init();
	vector<mint> ar(r + 1, 0), ag(g + 1, 0), ab(b + 1, 0);
	for (int i = k - y; i <= r; i++) {
		ar[i] = ncr(r, i);
	}
	for (int i = k - z; i <= g; i++) {
		ag[i] = ncr(g, i);
	}
	vector<mint> arg = atcoder::convolution(ar, ag);
	mint answer = 0;
	for (int i = k - x; i <= b; i++) {
		if ((k - i >= 0) && (k - i <= int(arg.size()))) {
			answer += arg[k - i] * ncr(b, i);
		}
	}
	cout << answer.val() << endl;
	return 0;
}
