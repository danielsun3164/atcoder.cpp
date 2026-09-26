#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string a, b;
	cin >> a >> b;
	if (a == b) {
		cout << "EQUAL" << endl;
	} else if (a.size() < b.size()) {
		cout << "LESS" << endl;
	} else if (a.size() > b.size()) {
		cout << "GREATER" << endl;
	} else {
		cout << ((a < b) ? "LESS" : "GREATER") << endl;
	}
	return 0;
}
