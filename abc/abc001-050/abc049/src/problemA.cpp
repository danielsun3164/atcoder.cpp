#include <bits/stdc++.h>
using namespace std;

const static set<char> SET = {'a', 'e', 'i', 'o', 'u'};

int main(void) {
	char c;
	cin >> c;
	cout << (SET.contains(c) ? "vowel" : "consonant") << endl;
	return 0;
}
