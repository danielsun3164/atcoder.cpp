#include <bits/stdc++.h>
using namespace std;

void func(int now, vector<vector<int>> &v, vector<bool> &used, vector<int> &r) {
	if (!used[now]) {
		used[now] = true;
		for (int w : v[now]) {
			if (!used[w]) {
				func(w, v, used, r);
			}
		}
		cout << (now + 1) << endl;
		r.push_back(now);
	}
}

/* 解説の解法4を実装 */
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n);
	bool exists[n][n];

	for (int i = 0; i < m; i++) {
		int w, l;
		cin >> w >> l;
		w--;
		l--;
		v[l].push_back(w);
		exists[w][l] = true;
	}

	vector<bool> used(n, false);
	vector<int> r;
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			func(i, v, used, r);
		}
	}
	if (m < n - 1) {
		cout << 1 << endl;
	} else {
		for (int i = 1; i < n; i++) {
			if (!exists[r[i - 1]][r[i]]) {
				cout << 1 << endl;
				return 0;
			}
		}
		cout << 0 << endl;
	}
	return 0;
}
