#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q, sum = 0;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	vector<set<int>> ng(n);
	for (int i = 0; i < q; i++) {
		int xi, yi;
		cin >> xi >> yi;
		xi--;
		yi--;
		ng[xi].insert(yi);
		ng[yi].insert(xi);
	}
	vector<set<int>> dp(sum + 1);
	for (int i = 0; i < n; i++) {
		for (int j = sum - a[i]; j >= 0; j--) {
			if ((0 == j) || !dp[j].empty()) {
				bool can_add = true;
				for (int ngi : ng[i]) {
					if (dp[j].end() != dp[j].find(ngi)) {
						can_add = false;
						break;
					}
				}
				if (can_add) {
					if (dp[j + a[i]].empty()) {
						dp[j + a[i]] = dp[j];
						dp[j + a[i]].insert(i);
					} else {
						cout << dp[j + a[i]].size() << endl;
						bool first = true;
						for (int dpj : dp[j + a[i]]) {
							cout << (first ? "" : " ") << (dpj + 1);
							first = false;
						}
						cout << endl << (dp[j].size() + 1) << endl;
						for (int dpj : dp[j]) {
							cout << (dpj + 1) << " ";
						}
						cout << (i + 1) << endl;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
