#include <bits/stdc++.h>
using namespace std;

const static char A = 'A';
const static char Z = 'Z';

int main(void) {
	string s;
	cin >> s;
	cout << (s.find_last_of(Z) - s.find(A) + 1) << endl;
	return 0;
}
