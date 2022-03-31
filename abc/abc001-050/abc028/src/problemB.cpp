#include <bits/stdc++.h>
using namespace std;

const string DICT = "ABCDEF";

int main(void) {
	string s;
	cin >> s;
	map<char, int> m;
	for (char c : s) {
		m[c]++;
	}
	for (int i = 0; i < int(DICT.size()); i++) {
		cout << (i ? " " : "") << m[DICT[i]];
	}
	cout << endl;
	return 0;
}
