#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int MAX = 3000;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int &bi : b) {
		cin >> bi;
	}
	vector<mint> dp(MAX + 1, 0), sum(MAX + 1, 1);
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		fill(dp.begin(), dp.end(), 0);
		for (int j = a[i]; j <= b[i]; j++) {
			dp[j] = sum[j];
		}
		sum[0] = dp[0];
		for (int j = 1; j <= MAX; j++) {
			sum[j] = sum[j - 1] + dp[j];
		}
	}
	cout << sum[MAX].val() << endl;
	return 0;
}
