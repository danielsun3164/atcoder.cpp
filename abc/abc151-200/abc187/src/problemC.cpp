#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<set<string>> sets(2);
	set<string> r;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		if ('!' == s[0]) {
			sets[1].insert(s.substr(1));
		} else {
			sets[0].insert(s);
		}
	}
	set_intersection(sets[0].begin(), sets[0].end(), sets[1].begin(), sets[1].end(),
					 inserter(r, r.end()));
	if (r.empty()) {
		cout << "satisfiable" << endl;
	} else {
		cout << *r.begin() << endl;
	}
	return 0;
}
