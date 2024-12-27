#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, p, q, r;
	cin >> n >> m >> p >> q >> r;
	vector<vector<pair<int, int>>> y(m);
	while (r--) {
		int xi, yi, z;
		cin >> xi >> yi >> z;
		xi--;
		yi--;
		y[yi].push_back({xi, z});
	}
	int ans = 0;
	for (int i = 1; i < (1 << n); i++) {
		if (p == __builtin_popcount(i)) {
			vector<int> res;
			for (auto v : y) {
				int sum = 0;
				for (auto pi : v) {
					if (i & (1 << pi.first)) {
						sum += pi.second;
					}
				}
				res.emplace_back(sum);
			}
			sort(res.begin(), res.end());
			ans = max(ans, accumulate(res.begin() + m - q, res.end(), 0));
		}
	}
	cout << ans << endl;
	return 0;
}
