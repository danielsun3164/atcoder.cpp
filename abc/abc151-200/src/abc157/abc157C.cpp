#include <bits/stdc++.h>
using namespace std;

const char DEFALT = ' ';
const char ZERO = '0';

int main(void) {
	int n, m;
	cin >> n >> m;
	string ans(n, DEFALT);
	vector<int> s(m), c(m);
	for (int i = 0; i < m; i++) {
		cin >> s[i] >> c[i];
		s[i]--;
	}
	for (int i = 0; i < m; i++) {
		if ((DEFALT != ans[s[i]]) && (ans[s[i]] != c[i] + ZERO)) {
			cout << "-1" << endl;
			return 0;
		}
		ans[s[i]] = c[i] + ZERO;
	}
	for (int i = 0; i < n; i++) {
		if (DEFALT == ans[i]) {
			ans[i] = ((1 == n) || (i > 0)) ? ZERO : ZERO + 1;
		}
	}
	cout << (((n > 1) && (ZERO == ans[0])) ? "-1" : ans) << endl;
	return 0;
}
