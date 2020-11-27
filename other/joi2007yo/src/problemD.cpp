#include <bits/stdc++.h>
using namespace std;

void cut(vector<int> &v, int k) {
	vector<int> r(v.size());
	copy(v.begin() + k, v.end(), r.begin());
	copy(v.begin(), v.begin() + k, r.end() - k);
	v = r;
}

void shuffle(vector<int> &v) {
	int n = v.size() / 2;
	vector<int> r(2 * n);
	for (int i = 0; i < n; i++) {
		r[2 * i] = v[i];
		r[2 * i + 1] = v[n + i];
	}
	v = r;
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> v(2 * n);
	// 初期化
	for (int i = 0; i < 2 * n; i++) {
		v[i] = i + 1;
	}
	// 処理
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		if (0 == k) {
			shuffle(v);
		} else {
			cut(v, k);
		}
	}
	for (int vi : v) {
		cout << vi << endl;
	}
	return 0;
}
