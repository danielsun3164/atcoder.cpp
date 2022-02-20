#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
	int n = s.size();
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	cout
			<< ((is_palindrome(s) && is_palindrome(s.substr(0, n / 2)) && is_palindrome(s.substr((n + 1) / 2, n / 2))) ?
					"Yes" : "No") << endl;
	return 0;
}
