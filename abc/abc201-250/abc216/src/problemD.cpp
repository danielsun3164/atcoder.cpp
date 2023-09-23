#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> count(n, 0), ok;
	vector<queue<int>> pipes(m);
	vector<vector<int>> indexes(n);
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int a;
			cin >> a;
			a--;
			pipes[i].push(a);
			indexes[a].emplace_back(i);
		}
		count[pipes[i].front()]++;
		if (2 == count[pipes[i].front()]) {
			ok.emplace_back(pipes[i].front());
		}
	}
	int answer = 0;
	while (!ok.empty()) {
		int now = ok.back();
		ok.pop_back();
		answer++;
		for (int pipe : indexes[now]) {
			pipes[pipe].pop();
			if (!pipes[pipe].empty()) {
				count[pipes[pipe].front()]++;
				if (2 == count[pipes[pipe].front()]) {
					ok.emplace_back(pipes[pipe].front());
				}
			}
		}
	}
	cout << ((n == answer) ? "Yes" : "No") << endl;
	return 0;
}
