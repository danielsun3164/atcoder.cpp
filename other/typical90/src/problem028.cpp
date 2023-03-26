#include <bits/stdc++.h>
using namespace std;

const static int N = 1001;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> v(N + 1, vector<int>(N + 1, 0));
	for (int i = 0; i < n; i++) {
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;
		v[lx][ly]++;
		v[lx][ry]--;
		v[rx][ly]--;
		v[rx][ry]++;
	}
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j < N; j++) {
			v[i][j + 1] += v[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= N; j++) {
			v[i + 1][j] += v[i][j];
		}
	}
	vector<int> counts(n + 1, 0);
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			counts[v[i][j]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << counts[i] << endl;
	}
	return 0;
}
