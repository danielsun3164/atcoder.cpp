#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string c;
	cin >> c;
	set<char> s;
	for (char t : c) {
		s.insert(t);
	}
	cout << ((1 == s.size()) ? "Won" : "Lost") << endl;
	return 0;
}
