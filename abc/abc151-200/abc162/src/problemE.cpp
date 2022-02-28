#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<mint> cnt(k + 1, 0);
	mint ans = k;
	ans = ans.pow(n);
	for (int i = k; i >= 2; i--) {
		cnt[i] = mint(k / i).pow(n);
		for (int j = i + i; j <= k; j += i) {
			cnt[i] -= cnt[j];
		}
		ans += cnt[i] * (i - 1);
	}
	cout << ans.val() << endl;
	return 0;
}
