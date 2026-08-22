#include <bits/stdc++.h>
using namespace std;

int distance(pair<int, int> &a, pair<int, int> &b) {
	return (a.first - b.first) * (a.first - b.first) +
		   (a.second - b.second) * (a.second - b.second);
}

int main() {
	int n;
	cin >> n;
	set<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		s.insert(make_pair(x, y));
	}
	int ans = 0;
	for (auto i : s) {
		for (auto j : s) {
			if ((i != j) && (distance(i, j) > ans)) {
				if ((s.find(make_pair(j.first - j.second + i.second,
									  j.second + j.first - i.first)) != s.end()) &&
					(s.find(make_pair(i.first - j.second + i.second,
									  i.second + j.first - i.first)) != s.end())) {
					ans = max(ans, distance(i, j));
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
