#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	cout << (((0 == (s.size() & 1)) ^ (s[0] == s.back())) ? "Second" : "First") << endl;
	return 0;
}
