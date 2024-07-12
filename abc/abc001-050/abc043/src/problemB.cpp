#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s, t;
	cin >> s;
	for (char c : s) {
		if ('B' == c) {
			if (!t.empty()) {
				t.pop_back();
			}
		} else {
			t.push_back(c);
		}
	}
	cout << t << endl;
	return 0;
}