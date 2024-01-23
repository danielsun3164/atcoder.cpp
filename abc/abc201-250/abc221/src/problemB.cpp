#include <bits/stdc++.h>
using namespace std;

bool check(string &s, string &t) {
	if (s == t) {
		return true;
	}
	for (int i = 0; i < int(s.size() - 1); i++) {
		swap(s[i], s[i + 1]);
		if (s == t) {
			return true;
		}
		swap(s[i], s[i + 1]);
	}
	return false;
}

int main(void) {
	string s, t;
	cin >> s >> t;
	cout << (check(s, t) ? "Yes" : "No") << endl;
	return 0;
}
