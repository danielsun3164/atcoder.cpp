#include <bits/stdc++.h>
using namespace std;

const static char SHEEP = 'S';
const static char WOLF = 'W';
const static char SAME = 'o';
const static vector<string> PRE = {"SS", "SW", "WS", "WW"};

string answer;

char another(char animal) {
	return (SHEEP == animal) ? WOLF : SHEEP;
}

bool check(int n, string &s, string p) {
	answer = p;
	for (int i = 1; i < n; i++) {
		if (((SAME == s[i]) && (SHEEP == answer[i])) || ((SAME != s[i]) && (WOLF == answer[i]))) {
			answer.push_back(answer[i - 1]);
		} else {
			answer.push_back(another(answer[i - 1]));
		}
	}
	char last = answer.back();
	answer.pop_back();
	if (answer[0] != last) {
		return false;
	}
	if (((SAME == s[0]) && (SHEEP == answer[0])) || ((SAME != s[0]) && (WOLF == answer[0]))) {
		return answer[n - 1] == answer[1];
	} else {
		return answer[n - 1] != answer[1];
	}
}

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	for (string p : PRE) {
		if (check(n, s, p)) {
			cout << answer << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
