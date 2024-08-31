#include <bits/stdc++.h>
using namespace std;

const static char INCREASE = 'I';

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	int x = 0, answer = 0;
	for (char c : s) {
		x += (INCREASE == c) ? 1 : -1;
		answer = max(answer, x);
	}
	cout << answer << endl;
	return 0;
}
