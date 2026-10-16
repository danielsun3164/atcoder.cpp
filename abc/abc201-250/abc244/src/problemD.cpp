#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<char> s(N), t(N);
	int count = 0;
	for (char &si : s) {
		cin >> si;
	}
	for (char &ti : t) {
		cin >> ti;
	}
	for (int i = 0; i < N; i++) {
		count += (s[i] == t[i]) ? 1 : 0;
	}
	cout << (((0 == count) || (N == count)) ? "Yes" : "No") << endl;
	return 0;
}
