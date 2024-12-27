#include <bits/stdc++.h>
using namespace std;

const static string OXX = "oxx";

int main(void) {
	string s, t = OXX + OXX + OXX + OXX;
	cin >> s;
	cout << (t.contains(s) ? "Yes" : "No") << endl;
	return 0;
}
