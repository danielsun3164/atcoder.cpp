#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	map<int, vector<int>> mv;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		mv[x].emplace_back(y);
	}
	set<int> s, add, erase;
	s.insert(n);
	for (auto pv : mv) {
		for (int y : pv.second) {
			if ((s.end() != s.find(y + 1)) || (s.end() != s.find(y - 1))) {
				add.insert(y);
			} else {
				erase.insert(y);
			}
		}
		s.insert(add.begin(), add.end());
		for (int x : erase) {
			s.erase(x);
		}
		add.clear();
		erase.clear();
	}
	cout << s.size() << endl;
	return 0;
}
