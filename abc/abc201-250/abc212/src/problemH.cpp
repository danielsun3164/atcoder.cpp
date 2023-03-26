#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const int N = 1 << 16;

void walsh_hadamard_transform(vector<mint> &c) {
	int n = c.size();
	for (int i = 1; i < n; i <<= 1) {
		for (int j = 0; j < n; j++) {
			if (0 == (i & j)) {
				mint x = c[j], y = c[j | i];
				c[j] = x + y;
				c[j | i] = x - y;
			}
		}
	}
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<mint> c(N);
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		c[a] = 1;
	}
	walsh_hadamard_transform(c);
	for (int i = 0; i < N; i++) {
		if (1 == c[i].val()) {
			c[i] = n;
		} else {
			c[i] = (c[i].pow(n + 1) - c[i]) / (c[i] - 1);
		}
	}
	walsh_hadamard_transform(c);
	cout << (accumulate(c.begin() + 1, c.end(), mint(0)) / N).val() << endl;
	return 0;
}
