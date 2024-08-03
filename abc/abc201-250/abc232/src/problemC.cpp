#include <bits/stdc++.h>
using namespace std;

bool check(vector<pair<int, int>> &ab, vector<int> &c, vector<int> &d, vector<int> &index) {
	vector<pair<int, int>> v;
	for (int i = 0; i < int(c.size()); i++) {
		int nc = index[c[i]], nd = index[d[i]];
		v.push_back({min(nc, nd), max(nc, nd)});
	}
	sort(v.begin(), v.end());
	return ab == v;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> ab(m);
	for (auto &p : ab) {
		cin >> p.first >> p.second;
		p.first--;
		p.second--;
	}
	sort(ab.begin(), ab.end());
	vector<int> c(m), d(m), index(n);
	for (int i = 0; i < m; i++) {
		cin >> c[i] >> d[i];
		c[i]--;
		d[i]--;
	}
	iota(index.begin(), index.end(), 0);
	do {
		if (check(ab, c, d, index)) {
			cout << "Yes" << endl;
			return 0;
		}
	} while (next_permutation(index.begin(), index.end()));
	cout << "No" << endl;
	return 0;
}
