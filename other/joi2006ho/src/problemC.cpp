#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dfs(int max, int remain) {
	if (0 == remain) {
		vector<int> v;
		vector<vector<int>> vs { v };
		return vs;
	}
	vector<vector<int>> r;
	for (int i = min(max, remain); i >= 1; i--) {
		vector<vector<int>> vs = dfs(i, remain - i);
		for (vector<int> v : vs) {
			v.insert(v.begin(), i);
			r.push_back(v);
		}
	}
	return r;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> r = dfs(n, n);
	for (vector<int> v : r) {
		for (int i = 0; i < int(v.size()); i++) {
			if (i) {
				cout << " ";
			}
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
