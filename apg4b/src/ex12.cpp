#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int a = 1;
	for (int i = 0; i < S.size(); i++) {
		char c = S.at(i);
		if ('+' == c) {
			a++;
		} else if ('-' == c) {
			a--;
		}
	}
	cout << a << endl;
}
