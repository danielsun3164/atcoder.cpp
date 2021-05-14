#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const int N = 16;
const vector<char> NUMBERS = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int main() {
	string n;
	int k;
	cin >> n >> k;
	int l = n.size();
	vector<vector<mint>> dp(l + 1, vector<mint>(N + 1));
	set<char> s;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < N; j++) {
			if (n[i] == NUMBERS[j]) {
				break;
			}
			if ((j > 0) || (i > 0)) {
				dp[i + 1][s.size() + ((s.find(NUMBERS[j]) != s.end()) ? 0 : 1)]++;
			}
		}
		s.insert(n[i]);
		if (i > 0) {
			dp[i + 1][1] += N - 1;
		}
		for (int j = 1; j <= k; j++) {
			dp[i + 1][j] += dp[i][j] * j;
			dp[i + 1][j] += dp[i][j - 1] * (N - (j - 1));
		}
	}
	if (k == int(s.size())) {
		dp[l][k]++;
	}
	cout << dp[l][k].val() << endl;
	return 0;
}
