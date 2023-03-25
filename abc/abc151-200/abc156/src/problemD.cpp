#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

mint ncr(int n, int m) {
	mint r1 = 1, r2 = 1;
	for (int i = 0; i < m; i++) {
		r1 *= n - i;
		r2 *= i + 1;
	}
	return r1 / r2;
}

int main(void) {
	int n, a, b;
	cin >> n >> a >> b;
	cout << (mint(2).pow(n) - 1 - ncr(n, a) - ncr(n, b)).val() << endl;
	return 0;
}
