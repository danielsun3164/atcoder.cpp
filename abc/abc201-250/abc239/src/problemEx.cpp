#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static int N = 50'000;

int main(void) {
	int n, m;
	cin >> n >> m;
	int l = llround(sqrt(m)), k = m / (l + 1);
	vector<mint> low(N), high(N);
	for (int i = 1; i <= l + k; i++) {
		int x = (i <= l) ? i : m / (l + k + 1 - i);
		mint sum = 0;
		for (int j = 2, r, le = min(n, x); j <= le; j = r) {
			int q = x / j;
			r = min(n, x / q) + 1;
			sum += ((q <= l) ? low[q] : high[m / q]) * (r - j);
		}
		((i <= l) ? low[i] : high[l + k + 1 - i]) = (sum + n) / (n - 1);
	}
	cout << ((m <= l) ? low[m] : high[1]).val() << endl;
	return 0;
}
