#include <bits/stdc++.h>
using namespace std;

void convert(char &c) {
	if (c >= 'D') {
		c = char(c - 3);
	} else {
		c = char(c + 26 - 3);
	}
}

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		convert(s[i]);
	}
	cout << s << endl;
	return 0;
}
