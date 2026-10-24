#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n), t(n);
	map<string, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> s[i] >> t[i];
		mp[s[i]]++;
		mp[t[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if ((s[i] == t[i]) && (2 == mp[s[i]])) {
			continue;
		}
		if ((mp[s[i]] > 1) && (mp[t[i]] > 1)) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
