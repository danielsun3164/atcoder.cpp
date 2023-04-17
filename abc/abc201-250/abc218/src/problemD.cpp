#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	map<int, set<int>> mp;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		mp[x].insert(y);
	}
	vector<int> xs;
	for (pair<int, set<int>> p : mp) {
		if (p.second.size() >= 2) {
			xs.emplace_back(p.first);
		}
	}
	int answer = 0;
	for (int i = 0; i < int(xs.size()); i++) {
		for (int j = i + 1; j < int(xs.size()); j++) {
			int count = 0;
			for (int yi : mp[xs[i]]) {
				if (mp[xs[j]].end() != mp[xs[j]].find(yi)) {
					count++;
				}
			}
			answer += count * (count - 1) / 2;
		}
	}
	cout << answer << endl;
	return 0;
}
