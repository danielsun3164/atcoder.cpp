#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int n;
	cin >> n;
	vector<int> s(n);
	for (int &si : s) {
		cin >> si;
	}
	vector<set<int>> dp(2);
	dp[0].insert(0);
	for (int i = 0; i < n; i++) {
		dp[(i + 1) & 1] = dp[i & 1];
		for (int dpi : dp[i & 1]) {
			dp[(i + 1) & 1].insert(dpi + s[i]);
		}
	}
	set<int> answer;
	for (int dpi : dp[n & 1]) {
		answer.insert((0 == dpi % N) ? 0 : dpi);
	}
	cout << *answer.rbegin() << endl;
	return 0;
}
