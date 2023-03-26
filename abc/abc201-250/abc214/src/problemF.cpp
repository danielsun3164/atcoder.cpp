#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const int N = 26;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<mint> sum(N, 1), dp(n + 1, 0);
	for (int i = 0; i < n; i++) {
		dp[i + 1] += sum[s[i] - 'a'];
		sum[s[i] - 'a'] = 0;
		for (int j = 0; j < N; j++) {
			sum[j] += dp[i];
		}
	}
	cout << accumulate(dp.begin(), dp.end(), mint(0)).val() << endl;
	return 0;
}
