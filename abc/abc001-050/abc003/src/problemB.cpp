#include <bits/stdc++.h>
using namespace std;

const static char WILD_CARD = '@';
const static set<char> WILD_CARD_SET = {'a', 't', 'c', 'o', 'd', 'e', 'r', '@'};

int main(void) {
	string s, t;
	cin >> s >> t;
	bool result = true;
	for (int i = 0; i < int(s.length()); i++) {
		if (WILD_CARD == s[i]) {
			if (WILD_CARD_SET.end() == WILD_CARD_SET.find(t[i])) {
				result = false;
				break;
			}
		} else if (WILD_CARD == t[i]) {
			if (WILD_CARD_SET.end() == WILD_CARD_SET.find(s[i])) {
				result = false;
				break;
			}
		} else if (s[i] != t[i]) {
			result = false;
			break;
		}
	}
	cout << (result ? "You can win" : "You will lose") << endl;
	return 0;
}
