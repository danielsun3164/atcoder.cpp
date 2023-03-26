#include <bits/stdc++.h>
using namespace std;

const static int N = 50;

void init(vector<vector<int>> &grundy) {
	grundy[N].resize(N + 1, 0);
	for (int i = N - 1; i >= 0; i--) {
		grundy[i].resize(i + 1 + grundy[i + 1].size(), 0);
	}
	vector<bool> s(grundy[0].size(), false);
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j < int(grundy[i].size()); j++) {
			fill(s.begin(), s.end(), false);
			if (i > 0) {
				s[grundy[i - 1][j + i]] = true;
			}
			for (int k = 1; k <= j / 2; k++) {
				s[grundy[i][j - k]] = true;
			}
			int l = 0;
			while (s[l]) {
				l++;
			}
			grundy[i][j] = l;
		}
	}
}

int main() {
	vector<vector<int>> grundy(N + 1);
	init(grundy);
	int n;
	cin >> n;
	int answer = 0;
	vector<int> w(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		answer ^= grundy[w[i]][b[i]];
	}
	cout << ((0 == answer) ? "Second" : "First") << endl;
	return 0;
}
