#include <bits/stdc++.h>
using namespace std;

static const int N = 100'002;

void process(int n, vector<int> &c, vector<vector<int>> &edges, int now, vector<int> &cnt,
			 vector<bool> &used, vector<bool> &ok) {
	if (0 == cnt[c[now]]) {
		ok[now] = true;
	}
	used[now] = true;
	cnt[c[now]]++;
	for (int next : edges[now]) {
		if (!used[next]) {
			process(n, c, edges, next, cnt, used, ok);
		}
	}
	cnt[c[now]]--;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		edges[a - 1].emplace_back(b - 1);
		edges[b - 1].emplace_back(a - 1);
	}
	vector<int> cnt(N, 0);
	vector<bool> used(n, false), ok(n, false);
	process(n, c, edges, 0, cnt, used, ok);
	for (int i = 0; i < n; i++) {
		if (ok[i]) {
			cout << (i + 1) << endl;
		}
	}
	return 0;
}
