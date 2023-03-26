#include <bits/stdc++.h>
using namespace std;

bool dfs(int n, vector<vector<int>> &t, int now, int sum) {
	if (now == n) {
		return sum == 0;
	}
	for (int ti : t[now]) {
		if (dfs(n, t, now + 1, sum ^ ti)) {
			return true;
		}
	}
	return false;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> t(n, vector<int>(k));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> t[i][j];
		}
	}
	cout << (dfs(n, t, 0, 0) ? "Found" : "Nothing") << endl;
	return 0;
}
