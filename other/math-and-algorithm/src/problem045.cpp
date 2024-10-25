#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j : edges[i]) {
			if (j < i) {
				count++;
			}
		}
		if (1 == count) {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}
