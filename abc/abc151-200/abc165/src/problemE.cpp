#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	n = 2 * m + 1;
	int d = 1 & m;
	vector<vector<int>> ans(m, vector<int>(2));
	for (int i = 0; i < m / 2; i++) {
		ans[i][0] = i + 1;
		ans[i][1] = m - i + 1 - d;
	}
	for (int i = m / 2; i < m; i++) {
		ans[i][0] = m + (i - m / 2) + 2 - d;
		ans[i][1] = n - (i - m / 2);
	}
	for (vector<int> ai : ans) {
		cout << ai[0] << " " << ai[1] << endl;
	}
	return 0;
}
