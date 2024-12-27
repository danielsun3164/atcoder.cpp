#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	string x = s.substr(0, s.find("."));
	char y = s.back();
	cout << x << ((('0' <= y) && (y <= '2')) ? "-" : ((('7' <= y) && (y <= '9')) ? "+" : ""))
		 << endl;
	return 0;
}
