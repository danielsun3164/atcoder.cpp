#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	map<string, string> mp;
	for (int i = 0; i < n; i++) {
		string from, to;
		cin >> from >> to;
		mp[from] = to;
	}
	cin >> m;
	string r = "";
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (mp.count(s)) {
			r.append(mp[s]);
		} else {
			r.append(s);
		}
	}
	cout << r << endl;
	return 0;
}
