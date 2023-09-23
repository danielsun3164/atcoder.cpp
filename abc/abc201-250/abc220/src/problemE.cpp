#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n, d;
	cin >> n >> d;
	vector<mint> p2(max((n << 1) + 1, d + 2));
	p2[0] = 1;
	for (int i = 1; i < int(p2.size()); i++) {
		p2[i] = p2[i - 1] * 2;
	}
	mint answer = 0;
	for (int i = 0; i < n; i++) {
		mint f1d = (i + d < n) ? p2[d + 1] : 0;
		mint f2d;
		if ((2 * (n - 1 - i) < d) || (1 == d)) {
			f2d = 0;
		} else if (i + d < n) {
			f2d = p2[d - 1] * (d - 1);
		} else {
			f2d = p2[d - 1] * (2 * (n - i) - d - 1);
		}
		answer += p2[i] * (f1d + f2d);
	}
	cout << answer.val() << endl;
	return 0;
}
