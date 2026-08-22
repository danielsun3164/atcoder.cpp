#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, vector<int>, greater<int>> m;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		m[s].emplace_back(i);
	}
	int rank = 1;
	vector<int> ans(n);
	for (pair<int, vector<int>> p : m) {
		for (int idx : p.second) {
			ans[idx] = rank;
		}
		rank += p.second.size();
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
