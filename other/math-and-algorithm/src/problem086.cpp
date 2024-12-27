#include <bits/stdc++.h>
using namespace std;

const static char START = '(';
const static char END = ')';

int main() {
	int n, count = 0;
	string s;
	cin >> n >> s;
	for (char c : s) {
		if (START == c) {
			count++;
		} else {
			count--;
		}
		if (count < 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << ((0 == count) ? "Yes" : "No") << endl;
	return 0;
}
