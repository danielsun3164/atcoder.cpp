#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	string s;
	cin >> s;
	vector<bool> used(N, false);
	for (char c : s) {
		used[c - '0'] = true;
	}
	for (int i = 0; i < N; i++) {
		if (!used[i]) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
