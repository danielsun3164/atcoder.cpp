#include <bits/stdc++.h>
using namespace std;

const static char DOT = '.';

int main(void) {
	string s;
	cin >> s;
	int n = s.length(), k;
	cin >> k;
	int start = 0, end = 0, x_count = 0, dot_count = 0, answer = 0;
	while (end < n) {
		if (DOT == s[end++]) {
			if (dot_count == k) {
				while (start < end) {
					if (DOT == s[start++]) {
						dot_count--;
						break;
					} else {
						x_count--;
					}
				}
				if (dot_count == k) {
					start++;
					continue;
				}
			}
			dot_count++;
		} else {
			x_count++;
		}
		answer = max(answer, x_count + dot_count);
	}
	cout << answer << endl;
	return 0;
}
