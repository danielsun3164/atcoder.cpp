#include <bits/stdc++.h>
using namespace std;

const int N = 26;

int main() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<vector<int>> nex(n + 1, vector<int>(N));
	for (int i = 0; i < N; i++) {
		nex[n][i] = n;
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < N; j++) {
			nex[i][j] = (s[i] - 'a' == j) ? i : nex[i + 1][j];
		}
	}
	string ans;
	int pos = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < N; j++) {
			int nexPos = nex[pos][j];
			if (nexPos <= n - k + i) {
				ans.push_back(j + 'a');
				pos = nexPos + 1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
