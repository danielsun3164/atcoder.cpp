#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int a = 1;
	for (char c : S) {
		if ('+' == c) {
			a++;
		} else if ('-' == c) {
			a--;
		}
	}
	cout << a << endl;
}
