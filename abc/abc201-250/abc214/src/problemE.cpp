#include <bits/stdc++.h>
using namespace std;

const int MAX = 1'000'000'007;

string to_string(vector<int> v) {
	string s = "{";
	for (int vi : v) {
		s += to_string(vi) + ",";
	}
	s += "}";
	return s;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<int, vector<int>> m;
		for (int i = 0; i < n; i++) {
			int l, r;
			cin >> l >> r;
			m[l].emplace_back(r);
		}
		m[MAX].emplace_back(MAX);
		priority_queue<int, vector<int>, greater<int>> que;
		int now = 0;
		while (now < MAX) {
			if (m.end() != m.find(now)) {
				for (int u : m[now]) {
					que.push(u);
				}
				m.erase(now);
			}
			if (que.empty()) {
				auto p = *m.begin();
				m.erase(m.begin());
				now = p.first;
				for (int u : p.second) {
					que.push(u);
				}
			}
			int now_r = que.top();
			que.pop();
			if (now_r < now) {
				break;
			}
			now++;
		}
		cout << (((now > MAX) && (que.empty())) ? "Yes" : "No") << endl;
	}
	return 0;
}
