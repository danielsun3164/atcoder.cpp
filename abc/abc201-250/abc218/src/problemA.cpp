#include <bits/stdc++.h>
using namespace std;

const static char SUNNY = 'o';

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	cout << ((SUNNY == s[n - 1]) ? "Yes" : "No") << endl;
	return 0;
}
