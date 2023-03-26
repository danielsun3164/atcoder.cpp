#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

int calc(int n, vector<vector<int>> &a, int m, vector<int> &x, vector<int> &y, vector<int> &v) {
	vector<int> idx(n);
	for (int i = 0; i < n; i++) {
		idx[v[i]] = i;
	}
	for (int i = 0; i < m; i++) {
		if (1 == abs(idx[x[i]] - idx[y[i]])) {
			return INF;
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += a[v[i]][i];
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	vector<int> x(m), y(m);
	for (int i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
		x[i]--;
		y[i]--;
	}
	int answer = INF;
	vector<int> v(n);
	iota(v.begin(), v.end(), 0);
	do {
		answer = min(answer, calc(n, a, m, x, y, v));
	} while (next_permutation(v.begin(), v.end()));
	cout << ((INF == answer) ? -1 : answer) << endl;
	return 0;
}
