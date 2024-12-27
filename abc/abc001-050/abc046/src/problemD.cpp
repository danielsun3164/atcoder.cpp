#include <bits/stdc++.h>
using namespace std;

const static char PA = 'p';

int main(void) {
	string s;
	cin >> s;
	int pa = 0;
	for (char c : s) {
		pa += (PA == c);
	}
	cout << ((s.size() >> 1) - pa) << endl;
	return 0;
}
