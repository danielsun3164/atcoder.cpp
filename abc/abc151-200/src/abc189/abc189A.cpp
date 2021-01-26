#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string c;
	cin >> c;
	set<char> s;
	for (unsigned long int i = 0; i < c.size(); i++) {
		s.insert(c[i]);
	}
	cout << ((1 == s.size()) ? "Won" : "Lost") << endl;
	return 0;
}
