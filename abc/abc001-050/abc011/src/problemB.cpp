#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < int(s.size()); i++) {
		s[i] = (i) ? tolower(s[i]) : toupper(s[i]);
	}
	cout << s << endl;
	return 0;
}
