#include <bits/stdc++.h>
using namespace std;

const static int N = 26;

int main(void) {
	string s;
	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;
		s.push_back('a' + p - 1);
	}
	cout << s << endl;
	return 0;
}
