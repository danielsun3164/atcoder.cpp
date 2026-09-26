#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	string answer;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		answer.push_back(toupper(s[0]));
	}
	cout << answer << endl;
	return 0;
}
