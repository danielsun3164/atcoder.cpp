#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		edges[a - 1].emplace_back(b - 1);
	}
	atcoder::dsu d(n);
	vector<int> answers(n);
	int count = 0;
	for (int i = n - 1; i >= 0; i--) {
		answers[i] = count;
		count++;
		for (int next : edges[i]) {
			if (!d.same(i, next)) {
				d.merge(i, next);
				count--;
			}
		}
	}
	for (int ai : answers) {
		cout << ai << endl;
	}
	return 0;
}
