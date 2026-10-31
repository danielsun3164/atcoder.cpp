#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int n, m;
	cin >> n >> m;
	if (abs(n - m) > 1) {
		cout << 0 << endl;
		return 0;
	}
	int p = max(n, m);
	vector<mint> fact(p + 1);
	fact[0] = 1;
	for (int i = 0; i < p; i++) {
		fact[i + 1] = fact[i] * (i + 1);
	}
	mint answer = fact[n] * fact[m];
	if (n == m) {
		answer *= 2;
	}
	cout << answer.val() << endl;
	return 0;
}
