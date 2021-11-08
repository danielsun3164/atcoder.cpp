#include <bits/stdc++.h>
using namespace std;

const char START[] = { 'a', 'A' };
const char END[] = { 'z', 'Z' };

int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < int(s.size()); i++) {
		if ((s[i] < START[i & 1]) || (s[i] > END[i & 1])) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
