#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> t(n);
	int sum = 0;
	for (int &ti : t) {
		cin >> ti;
		sum += ti;
	}
	vector<bool> dp(sum + 1, false);
	dp[0] = true;
	for (int i = 0; i < n; i++) {
		for (int j = sum - t[i]; j >= 0; j--) {
			if (dp[j]) {
				dp[j + t[i]] = true;
			}
		}
	}
	int answer = sum;
	for (int i = 0; i <= sum / 2; i++) {
		if (dp[i]) {
			answer = min(answer, max(i, sum - i));
		}
	}
	cout << answer << endl;
	return 0;
}
