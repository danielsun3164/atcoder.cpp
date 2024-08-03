#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	string s;
	cin >> s;
	cout << (regex_match(s.begin(), s.end(), regex("^(dream|dreamer|erase|eraser)+$")) ? "YES"
																					   : "NO")
		 << endl;
	return 0;
}
