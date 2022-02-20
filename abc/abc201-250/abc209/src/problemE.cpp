#include <bits/stdc++.h>
using namespace std;

const int N = 3;

string to_string(vector<int> &v) {
	string s = "[";
	for (int vi : v) {
		s += to_string(vi);
		s += ",";
	}
	s += "]";
	return s;
}

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n);
	map<string, vector<int>> next_map, prev_map;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		next_map[s[i].substr(0, N)].emplace_back(i);
		prev_map[s[i].substr(s[i].size() - N)].emplace_back(i);
	}
	vector<vector<int>> edges(n), prev_edges(n);
	vector<int> ans(n, -1), cnt(n, 0);
	queue<int> que;
	for (int i = 0; i < n; i++) {
		edges[i] = next_map[s[i].substr(s[i].size() - N)];
		prev_edges[i] = prev_map[s[i].substr(0, N)];
		cnt[i] = edges[i].size();
		if (0 == cnt[i]) {
			ans[i] = 0;
			que.push(i);
		}
	}
	while (!que.empty()) {
		int t = que.front();
		que.pop();
		for (int x : prev_edges[t]) {
			if (-1 == ans[x]) {
				cnt[x]--;
				if (0 == ans[t]) {
					ans[x] = 1;
					que.push(x);
				} else if (0 == cnt[x]) {
					ans[x] = 0;
					que.push(x);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ((0 == ans[i]) ? "Takahashi" : ((1 == ans[i]) ? "Aoki" : "Draw")) << endl;
	}
	return 0;
}
