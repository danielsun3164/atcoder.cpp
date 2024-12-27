#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	replace(s.begin(), s.end(), ',', ' ');
	cout << s << endl;
	return 0;
}
