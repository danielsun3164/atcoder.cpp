#include <bits/stdc++.h>
using namespace std;

const char SEVEN = '7';

int main(void) {
	string s;
	cin >> s;
	cout << ((string::npos != s.find(SEVEN)) ? "Yes" : "No") << endl;
	return 0;
}
