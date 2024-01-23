#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> subset_sum(vector<int> &a, int target) {
	int n = a.size(), a_max = *max_element(a.begin(), a.end()), idx = 0, sum = 0;
	while ((idx < n) && (sum + a[idx] <= target)) {
		sum += a[idx++];
	}
	if ((n == idx) && (sum != target)) {
		return {};
	}
	vector<int> dp(a_max << 1, -1);
	vector<vector<int>> prv(n, vector<int>(a_max << 1, -1));
	int offset = target - a_max + 1;
	dp[sum - offset] = idx;
	for (int i = idx; i < n; i++) {
		vector<int> dp2 = dp, &prv_cur = prv[i];
		for (int j = a_max - 1; j >= 0; j--) {
			if (dp2[j + a[i]] < dp2[j]) {
				prv_cur[j + a[i]] = -2;
				dp2[j + a[i]] = dp2[j];
			}
		}
		for (int j = (a_max << 1) - 1; j >= a_max; j--) {
			for (int k = dp2[j] - 1; k >= max(dp[j], 0); k--) {
				if (dp2[j - a[k]] < k) {
					prv_cur[j - a[k]] = k;
					dp2[j - a[k]] = k;
				}
			}
		}
		dp = move(dp2);
	}
	if (-1 == dp[a_max - 1]) {
		return {};
	}
	vector<bool> ans(n);
	int i = n - 1, j = a_max - 1;
	while (i >= idx) {
		int p = prv[i][j];
		if (-2 == p) {
			ans[i] = !ans[i];
			j -= a[i--];
		} else if (-1 == p) {
			i--;
		} else {
			ans[p] = !ans[p];
			j += a[p];
		}
	}
	while (i >= 0) {
		ans[i] = !ans[i];
		i--;
	}
	return ans;
}

int main(void) {
	int n, a, b;
	cin >> n >> a >> b;
	int x = a + b, y = a - b, sum = 0;
	vector<int> d(n);
	for (int &x : d) {
		cin >> x;
		sum += x;
	}
	if ((sum < abs(x)) || (sum < abs(y)) || (1 & (sum + x)) || (1 & (sum + y))) {
		cout << "No" << endl;
		return 0;
	}
	vector<bool> sol_x = subset_sum(d, (sum + x) >> 1), sol_y = subset_sum(d, (sum + y) >> 1);
	if (sol_x.empty() || sol_y.empty()) {
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;
	for (int i = 0; i < n; i++) {
		if (sol_x[i]) {
			cout << (sol_y[i] ? 'R' : 'U');
		} else {
			cout << (sol_y[i] ? 'D' : 'L');
		}
	}
	cout << endl;
	return 0;
}
