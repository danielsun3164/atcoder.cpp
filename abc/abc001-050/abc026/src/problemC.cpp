#include <bits/stdc++.h>
using namespace std;

int calc(vector<vector<int>> &subs, int now) {
	if (subs[now].empty()) {
		return 1;
	}
	vector<int> v;
	for (int sub : subs[now]) {
		v.emplace_back(calc(subs, sub));
	}
	sort(v.begin(), v.end());
	return v[0] + v[v.size() - 1] + 1;
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> subs(n);
	for (int i = 1; i < n; i++) {
		int b;
		cin >> b;
		subs[b - 1].emplace_back(i);
	}
	cout << calc(subs, 0) << endl;
	return 0;
}
