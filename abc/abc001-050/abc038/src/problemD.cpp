#include <bits/stdc++.h>
using namespace std;

int calc_mis(vector<int> &v) {
	vector<int> a;
	for (int vi : v) {
		decltype(a)::iterator it = upper_bound(a.begin(), a.end(), vi - 1);
		if (a.end() == it) {
			a.emplace_back(vi);
		} else {
			*it = vi;
		}
	}
	return a.size();
}

int calc(map<int, set<int, std::greater<int>>> &mp) {
	vector<int> v;
	for (pair<int, set<int, std::greater<int>>> pr : mp) {
		for (int si : pr.second) {
			v.emplace_back(si);
		}
	}
	return calc_mis(v);
}

int main(void) {
	int n;
	cin >> n;
	map<int, set<int, std::greater<int>>> h_map, w_map;
	for (int i = 0; i < n; i++) {
		int w, h;
		cin >> w >> h;
		h_map[h].insert(w);
		w_map[w].insert(h);
	}
	cout << max(calc(h_map), calc(w_map)) << endl;
	return 0;
}
