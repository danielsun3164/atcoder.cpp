#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	vector<string> s(N);
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	string t;
	cin >> t;
	for (int c : t) {
		cout << s[c - '1'];
	}
	cout << endl;
	return 0;
}
