#include <bits/stdc++.h>
using namespace std;

map<char, char> init() {
	map<char, char> m;
	m['0'] = '0';
	m['1'] = '1';
	m['6'] = '9';
	m['8'] = '8';
	m['9'] = '6';
	return m;
}

int main(void) {
	map<char, char> m = init();
	string s;
	cin >> s;
	int n = s.size();
	string t = s;
	for (int i = 0; i < n; i++) {
		t[n - 1 - i] = m[s[i]];
	}
	cout << t << endl;
	return 0;
}
