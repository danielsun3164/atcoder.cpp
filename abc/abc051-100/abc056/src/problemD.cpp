#include <bits/stdc++.h>
using namespace std;

bool check(int n, int k, vector<int> &a, int exclude) {
	vector<vector<bool>> dp(2, vector<bool>(k + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < n; i++) {
		dp[(i + 1) & 1] = dp[i & 1];
		if (i != exclude) {
			for (int j = 0; j <= k - a[i]; j++) {
				if (dp[i & 1][j]) {
					dp[(i + 1) & 1][j + a[i]] = true;
				}
			}
		}
	}
	for (int i = max(0, k - a[exclude]); i < k; i++) {
		if (dp[n & 1][i]) {
			return true;
		}
	}
	return false;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	sort(a.begin(), a.end());
	int ng = 0, ok = n + 1;
	while (ok > ng + 1) {
		int mid = (ng + ok) >> 1;
		if ((a[mid - 1] >= k) || check(n, k, a, mid - 1)) {
			ok = mid;
		} else {
			ng = mid;
		}
	}
	cout << ng << endl;
	return 0;
}
