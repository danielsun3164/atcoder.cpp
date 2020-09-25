#include <bits/stdc++.h>
using namespace std;

string convert(string s) {
	char prev = 0;
	int count = 0;
	string r;
	for (int i = 0; i < s.length(); i++) {
		if (prev != s[i]) {
			if (prev) {
				r = r + to_string(count) + prev;
			}
			prev = s[i];
			count = 1;
		} else {
			count++;
		}
	}
	if (count > 0) {
		r = r + to_string(count) + prev;
	}
	return r;
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		s = convert(s);
	}
	cout << s << endl;
	return 0;
}
