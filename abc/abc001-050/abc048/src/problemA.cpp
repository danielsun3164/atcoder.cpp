#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	string answer;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		answer.push_back(s[0]);
	}
	cout << answer << endl;
	return 0;
}
