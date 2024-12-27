#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			cout << i << " " << (i + 1) << endl;
			return 0;
		}
		if ((i >= 2) && (s[i] == s[i - 2])) {
			cout << (i - 1) << " " << (i + 1) << endl;
			return 0;
		}
	}
	cout << "-1 -1" << endl;
	return 0;
}
