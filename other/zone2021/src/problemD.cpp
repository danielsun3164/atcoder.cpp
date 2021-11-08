#include <bits/stdc++.h>
using namespace std;

const char REVERSE = 'R';

int main() {
	string s;
	cin >> s;
	string t;
	bool rev = false;
	for (char c : s) {
		if (REVERSE == c) {
			rev = !rev;
		} else {
			if (rev) {
				if ((t.size() > 0) && (c == t[0])) {
					t.erase(t.begin());
				} else {
					t.insert(0, 1, c);
				}
			} else {
				if ((t.size() > 0) && (c == *t.rbegin())) {
					t.pop_back();
				} else {
					t.push_back(c);
				}
			}
		}
	}
	if (rev) {
		reverse(t.begin(), t.end());
	}
	cout << t << endl;
	return 0;
}
