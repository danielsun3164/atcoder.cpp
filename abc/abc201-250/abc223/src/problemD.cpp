#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	vector<int> counts(n, 0);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		counts[b]++;
	}
	map<int, set<int>> mp;
	for (int i = 0; i < n; i++) {
		mp[counts[i]].insert(i);
	}
	int index = 0;
	vector<int> answer(n);
	while (!mp[0].empty()) {
		int now = *mp[0].begin();
		answer[index++] = now + 1;
		mp[0].erase(mp[0].begin());
		for (int next : edges[now]) {
			mp[counts[next]--].erase(next);
			mp[counts[next]].insert(next);
		}
	}
	if (n == index) {
		for (int i = 0; i < n; i++) {
			cout << (i ? " " : "") << answer[i];
		}
	} else {
		cout << -1;
	}
	cout << endl;
	return 0;
}
