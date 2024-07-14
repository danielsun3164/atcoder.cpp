#include <bits/stdc++.h>
using namespace std;

bool dfs(int n, int k, vector<vector<int>> &g, vector<int> &degree, vector<vector<int>> &answers,
		 int depth, vector<int> &st, vector<int> &perm) {
	if (depth == n) {
		answers.emplace_back(perm);
		return true;
	}
	if (st.empty()) {
		return false;
	}
	for (int i = int(st.size() - 1); i >= 0; i--) {
		if (k == int(answers.size())) {
			break;
		}
		int x = st[i];
		st.erase(st.begin() + i);
		for (int nt : g[x]) {
			degree[nt]--;
			if (0 == degree[nt]) {
				st.emplace_back(nt);
			}
		}
		perm[depth] = x;
		if (!dfs(n, k, g, degree, answers, depth + 1, st, perm)) {
			return false;
		}
		for (int nt : g[x]) {
			if (0 == degree[nt]) {
				st.pop_back();
			}
			degree[nt]++;
		}
		st.insert(st.begin() + i, x);
	}
	return true;
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> g(n);
	vector<int> degree(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].emplace_back(b);
		degree[b]++;
	}
	vector<int> st, perm(n, -1);
	vector<vector<int>> answers;
	for (int i = 0; i < n; i++) {
		if (0 == degree[i]) {
			st.emplace_back(i);
		}
	}
	dfs(n, k, g, degree, answers, 0, st, perm);
	if (k != int(answers.size())) {
		cout << -1 << endl;
	} else {
		for (vector<int> v : answers) {
			for (int i = 0; i < n; i++) {
				cout << ((i) ? "" : " ") << endl;
				cout << (v[i] + 1);
			}
			cout << endl;
		}
	}
	return 0;
}
