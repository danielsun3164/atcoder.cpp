#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static string KEY = "KEY";

int main(void) {
	string s;
	int k;
	cin >> s >> k;
	// dp[x][e][y]=(i番目まで見て、)swapをx回していて、Eをe個、Yをy個使用済みのとき、(残りの文字列,数)
	map<int, map<int, map<int, pair<string, ll>>>> dp;
	dp[0][0][0] = {s, 1LL};
	for (char _ : s) {
		map<int, map<int, map<int, pair<string, ll>>>> new_dp;
		for (auto [x, d1] : dp) {
			for (auto [e, d2] : d1) {
				for (auto [y, p] : d2) {
					auto [es, val] = p;
					for (char c : KEY) {
						string::size_type idx = es.find(c);
						if (idx != string::npos) {
							int nx = x + idx, ne = e + ('E' == c), ny = y + ('Y' == c);
							if (new_dp[nx][ne].contains(ny)) {
								new_dp[nx][ne][ny].second += val;
							} else {
								new_dp[nx][ne][ny] = {es.substr(0, idx) + es.substr(idx + 1), val};
							}
						}
					}
				}
			}
		}
		dp = move(new_dp);
	}
	ll answer = 0LL;
	for (auto [x, d1] : dp) {
		if (x <= k) {
			for (auto [e, d2] : d1) {
				for (auto [y, p] : d2) {
					answer += p.second;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
