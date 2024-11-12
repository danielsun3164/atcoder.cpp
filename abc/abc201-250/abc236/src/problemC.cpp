#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	set<string> t;
	for (int i = 0; i < m; i++) {
		string ti;
		cin >> ti;
		t.insert(ti);
	}
	for (string si : s) {
		cout << (t.contains(si) ? "Yes" : "No") << endl;
	}
	return 0;
}
