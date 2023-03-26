#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX >> 1;

int main(void) {
	int h, n;
	cin >> h >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (m.find(a) == m.end()) {
			m[a] = b;
		} else {
			m[a] = min(m[a], b);
		}
	}
	int ma = m.rbegin()->first;
	vector<int> dp(h + ma, INF);
	dp[0] = 0;
	for (int i = 0; i < h; i++) {
		if (INF != dp[i]) {
			for (auto p : m) {
				dp[i + p.first] = min(dp[i + p.first], dp[i] + p.second);
			}
		}
	}
	cout << *min_element(dp.begin() + h, dp.end()) << endl;
	return 0;
}
