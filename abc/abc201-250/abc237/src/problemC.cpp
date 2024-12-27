#include <bits/stdc++.h>
using namespace std;

const static char A = 'a';

bool is_palindrome(string &s, int start, int end) {
	while (end > start) {
		if (s[start++] != s[end--]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	string s;
	cin >> s;
	int n = s.size(), start = 0, end = n - 1;
	while ((start < n) && (A == s[start])) {
		start++;
	}
	while ((end >= 0) && (A == s[end])) {
		end--;
	}
	cout << (((start <= n - 1 - end) && is_palindrome(s, start, end)) ? "Yes" : "No") << endl;
	return 0;
}
