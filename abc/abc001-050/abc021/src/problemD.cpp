#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

mint ncr(int n, int m) {
	mint res = 1;
	for (int i = 0; i < m; i++) {
		res = res * (n - i) / (i + 1);
	}
	return res;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	cout << ncr(n + k - 1, k).val() << endl;
	return 0;
}
