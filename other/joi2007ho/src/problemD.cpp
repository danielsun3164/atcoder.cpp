#include <bits/stdc++.h>
using namespace std;

/* 解説の解法3を実装 */
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n);
	vector<int> a(n, 0);

	for (int i = 0; i < m; i++) {
		int w, l;
		cin >> w >> l;
		w--;
		l--;
		v[w].push_back(l);
		a[l]++;
	}
	int multi = 0, count = 0;
	vector<int> now, next;
	for (int i = 0; i < n; i++) {
		if (0 == a[i]) {
			count++;
			now.push_back(i);
		}
	}
	if (count > 1) {
		multi = 1;
	}
	vector<bool> used(n, false);
	while (true) {
		for (int w : now) {
			cout << (w + 1) << endl;
			used[w] = true;
			count = 0;
			for (int l : v[w]) {
				if (!used[l] && (0 == --a[l])) {
					next.push_back(l);
					count++;
				}
			}
			if (count > 1) {
				multi = 1;
			}
		}
		now.clear();
		if (next.empty()) {
			break;
		}
		swap(now, next);
	}
	cout << multi << endl;
	return 0;
}
