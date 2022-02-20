#include <bits/stdc++.h>
using namespace std;

const regex RE("(ch|o|k|u)*");

int main(void) {
	string x;
	cin >> x;
	cout << (regex_match(x, RE) ? "YES" : "NO") << endl;
	return 0;
}
