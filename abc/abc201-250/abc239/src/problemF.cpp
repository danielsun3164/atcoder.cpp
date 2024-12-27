#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

void print(vector<int> &v) {
	for (int &vi : v) {
		cout << vi << " ";
	}
	cout << endl;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> d(n);
	for (int &di : d) {
		cin >> di;
	}
	atcoder::dsu du(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		du.merge(a, b);
		d[a]--, d[b]--;
	}
	vector<vector<int>> temp(n);
	for (int i = 0; i < n; i++) {
		if (d[i] < 0) {
			cout << -1 << endl;
			return 0;
		}
		for (int j = 0; j < d[i]; j++) {
			temp[du.leader(i)].emplace_back(i);
		}
	}

	vector<int> c1;
	vector<vector<int>> c2;
	for (int i = 0; i < n; i++) {
		if (1 == temp[i].size()) {
			c1.emplace_back(temp[i][0]);
		} else if (temp[i].size() > 1) {
			c2.emplace_back(temp[i]);
		}
	}
	vector<pair<int, int>> answer;
	for (vector<int> &c2i : c2) {
		for (int i = 0; i < int(c2i.size()) - 1; i++) {
			if (c1.empty()) {
				cout << -1 << endl;
				return 0;
			}
			answer.emplace_back(c1.back(), c2i[i]);
			du.merge(c1.back(), c2i[i]);
			c1.pop_back();
		}
		c1.emplace_back(c2i.back());
	}
	if (2 != int(c1.size())) {
		cout << -1 << endl;
		return 0;
	}
	answer.emplace_back(c1[0], c1[1]);
	du.merge(c1[0], c1[1]);
	if (n != du.size(0)) {
		cout << -1 << endl;
		return 0;
	}
	for (auto [p, q] : answer) {
		cout << (p + 1) << " " << (q + 1) << endl;
	}
	return 0;
}
