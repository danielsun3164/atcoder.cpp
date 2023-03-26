#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> ra = a;
	reverse(ra.begin(), ra.end());
	vector<int> d(n, INF), rd(n, INF), dp(n), rdp(n);
	for (int i = 0; i < n; i++) {
		decltype(d)::iterator it = lower_bound(d.begin(), d.end(), a[i]);
		*it = a[i];
		dp[i] = distance(d.begin(), it) + 1;
		decltype(rd)::iterator rit = lower_bound(rd.begin(), rd.end(), ra[i]);
		*rit = ra[i];
		rdp[i] = distance(rd.begin(), rit) + 1;
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		answer = max(answer, dp[i] + rdp[n - 1 - i] - 1);
	}
	cout << answer << endl;
	return 0;
}
