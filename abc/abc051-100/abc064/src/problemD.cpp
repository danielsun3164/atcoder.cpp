#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char LEFT = '(';
char RIGHT = ')';

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	int level = 0;
	string answer;
	for (int i = 0; i < n; i++) {
		if (LEFT == s[i]) {
			level++;
		} else {
			level--;
			if (level < 0) {
				answer.push_back(LEFT);
				level++;
			}
		}
	}
	answer += s;
	while (level--) {
		answer.push_back(RIGHT);
	}
	cout << answer << endl;
	return 0;
}
